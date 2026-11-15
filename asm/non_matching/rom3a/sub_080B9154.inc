	THUMB_FUNC_START sub_080B9154
sub_080B9154: @ 0x080B9154
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r4, _080B91A8  @ =gRam
	ldr r2, _080B91AC  @ =0x00001122
	add r0, r4, r2
	add r0, r5, r0
	mov r2, #0
	strb r1, [r0]
	ldr r1, _080B91B0  @ =0x00001012
	add r0, r4, r1
	add r0, r5, r0
	strb r2, [r0]
	ldr r2, _080B91B4  @ =0x00001032
	add r0, r4, r2
	add r0, r5, r0
	mov r1, #16
	strb r1, [r0]
	mov r0, #4
	bl sub_080CF370
	add r0, r5, #0
	bl sub_080C6230
	ldr r1, _080B91B8  @ =0x00000F62
	add r0, r4, r1
	add r0, r5, r0
	ldrb r3, [r0]
	ldr r2, _080B91BC  @ =0x00000FC2
	add r4, r4, r2
	add r4, r5, r4
	ldrb r0, [r4]
	cmp r0, #0
	bne _080B91E8
	add r0, r3, #1
	lsl r0, r0, #24
	lsr r3, r0, #24
	cmp r3, #8
	bne _080B91C0
	mov r3, #6
	b _080B91CE
	.byte 0x00
	.byte 0x00
_080B91A8:
	.4byte gRam
_080B91AC:
	.4byte 0x00001122
_080B91B0:
	.4byte 0x00001012
_080B91B4:
	.4byte 0x00001032
_080B91B8:
	.4byte 0x00000F62
_080B91BC:
	.4byte 0x00000FC2
_080B91C0:
	cmp r3, #22
	bne _080B91C8
	mov r3, #21
	b _080B91CE
_080B91C8:
	cmp r3, #28
	bne _080B91CE
	mov r3, #27
_080B91CE:
	ldr r1, _080B923C  @ =gRam
	ldr r2, _080B9240  @ =0x00000F62
	add r0, r1, r2
	add r0, r5, r0
	strb r3, [r0]
	ldr r0, _080B9244  @ =0x00000FC2
	add r1, r1, r0
	add r1, r5, r1
	ldr r2, _080B9248  @ =gUnknown_08170AF8
	sub r0, r3, #1
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r1]
_080B91E8:
	ldr r0, _080B924C  @ =gUnknown_08170B13
	sub r1, r3, #1
	add r1, r1, r0
	ldrb r2, [r1]
	mov r0, #0
	ldrsb r0, [r1, r0]
	ldr r4, _080B923C  @ =gRam
	cmp r0, #0
	bge _080B9208
	ldr r1, _080B9250  @ =0x00000996
	add r0, r4, r1
	ldrb r1, [r0]
	mov r0, #8
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r2, r0, #27
_080B9208:
	ldr r1, _080B9254  @ =0x00000F92
	add r0, r4, r1
	add r0, r5, r0
	strb r2, [r0]
	cmp r3, #4
	bls _080B921C
	cmp r3, #9
	bls _080B9236
	cmp r3, #14
	bhi _080B9236
_080B921C:
	ldr r2, _080B9250  @ =0x00000996
	add r0, r4, r2
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	bne _080B9236
	ldr r0, _080B9258  @ =0x00000ED2
	add r1, r4, r0
	add r1, r5, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080B9236:
	pop {r4,r5}
	pop {r0}
	bx r0
_080B923C:
	.4byte gRam
_080B9240:
	.4byte 0x00000F62
_080B9244:
	.4byte 0x00000FC2
_080B9248:
	.4byte gUnknown_08170AF8
_080B924C:
	.4byte gUnknown_08170B13
_080B9250:
	.4byte 0x00000996
_080B9254:
	.4byte 0x00000F92
_080B9258:
	.4byte 0x00000ED2
	THUMB_FUNC_END sub_080B9154

