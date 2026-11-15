	THUMB_FUNC_START sub_080E1190
sub_080E1190: @ 0x080E1190
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C5044
	ldr r5, _080E1230  @ =gRam
	ldr r1, _080E1234  @ =0x00000996
	add r0, r5, r1
	ldrb r1, [r0]
	add r0, r4, #0
	eor r0, r0, r1
	mov r1, #15
	and r0, r0, r1
	cmp r0, #0
	bne _080E11E0
	ldr r0, _080E1238  @ =0x00000F62
	add r2, r5, r0
	add r2, r4, r2
	ldr r3, _080E123C  @ =gUnknown_081768D4
	ldr r1, _080E1240  @ =0x00000F72
	add r0, r5, r1
	add r5, r4, r0
	ldrb r1, [r5]
	mov r0, #1
	and r0, r0, r1
	add r0, r0, r3
	ldrb r0, [r0]
	ldrb r1, [r2]
	add r0, r0, r1
	strb r0, [r2]
	bl GetRandomInt
	mov r1, #3
	and r1, r1, r0
	cmp r1, #0
	bne _080E11E0
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
_080E11E0:
	ldr r3, _080E1230  @ =gRam
	ldr r1, _080E1238  @ =0x00000F62
	add r0, r3, r1
	add r0, r4, r0
	ldrb r0, [r0]
	mov r2, #15
	and r2, r2, r0
	ldr r0, _080E1244  @ =0x00000F22
	add r1, r3, r0
	add r1, r4, r1
	ldr r0, _080E1248  @ =gUnknown_081768B4
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r0, _080E124C  @ =0x00000F12
	add r1, r3, r0
	add r1, r4, r1
	ldr r0, _080E1250  @ =gUnknown_081768C4
	add r2, r2, r0
	ldrb r0, [r2]
	strb r0, [r1]
	ldr r1, _080E1234  @ =0x00000996
	add r0, r3, r1
	ldrb r1, [r0]
	add r0, r4, #0
	eor r0, r0, r1
	mov r1, #3
	and r0, r0, r1
	ldr r1, _080E1254  @ =0x00000FC2
	add r3, r3, r1
	add r3, r4, r3
	ldrb r1, [r3]
	orr r0, r0, r1
	cmp r0, #0
	beq _080E1258
	add r0, r4, #0
	bl sub_080E12DC
	b _080E125E
	.byte 0x00
	.byte 0x00
_080E1230:
	.4byte gRam
_080E1234:
	.4byte 0x00000996
_080E1238:
	.4byte 0x00000F62
_080E123C:
	.4byte gUnknown_081768D4
_080E1240:
	.4byte 0x00000F72
_080E1244:
	.4byte 0x00000F22
_080E1248:
	.4byte gUnknown_081768B4
_080E124C:
	.4byte 0x00000F12
_080E1250:
	.4byte gUnknown_081768C4
_080E1254:
	.4byte 0x00000FC2
_080E1258:
	add r0, r4, #0
	bl sub_080E15A8
_080E125E:
	pop {r4,r5}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080E1190

