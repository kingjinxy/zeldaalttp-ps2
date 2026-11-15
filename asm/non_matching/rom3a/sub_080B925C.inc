	THUMB_FUNC_START sub_080B925C
sub_080B925C: @ 0x080B925C
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r2, _080B92F0  @ =gRam
	ldr r1, _080B92F4  @ =0x00000FB2
	add r0, r2, r1
	add r4, r5, r0
	ldrb r0, [r4]
	mov r7, #1
	add r3, r7, #0
	and r3, r3, r0
	ldr r6, _080B92F8  @ =0x00000F22
	add r1, r2, r6
	add r1, r5, r1
	ldr r0, _080B92FC  @ =gUnknown_08170B2E
	mov r12, r0
	add r0, r3, r0
	ldrb r0, [r0]
	ldrb r6, [r1]
	add r0, r0, r6
	strb r0, [r1]
	ldr r1, _080B9300  @ =gUnknown_08170B30
	add r1, r3, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	add r6, r2, #0
	ldrb r1, [r1]
	cmp r0, r1
	bne _080B929C
	ldrb r0, [r4]
	add r0, r0, #1
	strb r0, [r4]
_080B929C:
	ldr r1, _080B9304  @ =0x00000996
	add r0, r6, r1
	ldrb r1, [r0]
	add r0, r7, #0
	and r0, r0, r1
	cmp r0, #0
	bne _080B92DC
	ldr r4, _080B9308  @ =0x00001082
	add r0, r6, r4
	add r2, r5, r0
	ldrb r0, [r2]
	add r3, r7, #0
	and r3, r3, r0
	ldr r0, _080B930C  @ =0x00000F12
	add r1, r6, r0
	add r1, r5, r1
	mov r4, r12
	add r0, r3, r4
	ldrb r0, [r0]
	ldrb r4, [r1]
	add r0, r0, r4
	strb r0, [r1]
	ldr r1, _080B9310  @ =gUnknown_08170B32
	add r1, r3, r1
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldrb r1, [r1]
	cmp r0, r1
	bne _080B92DC
	ldrb r0, [r2]
	add r0, r0, #1
	strb r0, [r2]
_080B92DC:
	ldr r1, _080B9314  @ =0x000015DC
	add r0, r6, r1
	strb r5, [r0]
	add r0, r5, #0
	bl sub_080CA58C
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B92F0:
	.4byte gRam
_080B92F4:
	.4byte 0x00000FB2
_080B92F8:
	.4byte 0x00000F22
_080B92FC:
	.4byte gUnknown_08170B2E
_080B9300:
	.4byte gUnknown_08170B30
_080B9304:
	.4byte 0x00000996
_080B9308:
	.4byte 0x00001082
_080B930C:
	.4byte 0x00000F12
_080B9310:
	.4byte gUnknown_08170B32
_080B9314:
	.4byte 0x000015DC
	THUMB_FUNC_END sub_080B925C

