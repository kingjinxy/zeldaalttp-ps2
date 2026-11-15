	THUMB_FUNC_START sub_080CB5A0
sub_080CB5A0: @ 0x080CB5A0
	push {r4,r5,lr}
	ldr r3, _080CB610  @ =gUnknown_08228DF0
	ldr r2, _080CB614  @ =gRam
	ldr r0, _080CB618  @ =0x00000B36
	add r4, r2, r0
	ldrh r1, [r4]
	lsl r0, r1, #2
	add r0, r0, r3
	ldr r3, [r0]
	lsr r1, r1, #3
	mov r0, #254
	and r1, r1, r0
	ldr r5, _080CB61C  @ =0x000015F5
	add r0, r2, r5
	mov r5, #0
	strb r1, [r0]
	ldrb r1, [r4]
	mov r0, #15
	and r0, r0, r1
	lsl r0, r0, #1
	ldr r4, _080CB620  @ =0x000015F4
	add r1, r2, r4
	strb r0, [r1]
	ldr r1, _080CB624  @ =gUnknown_082293F0
	sub r3, r3, r1
	ldr r0, _080CB628  @ =0x00FFFFFF
	and r3, r3, r0
	add r4, r3, r1
	ldrb r1, [r4]
	ldr r3, _080CB62C  @ =0x000015F7
	add r0, r2, r3
	strb r1, [r0]
	ldr r0, _080CB630  @ =0x00000964
	add r1, r2, r0
	strb r5, [r1]
	ldr r3, _080CB634  @ =0x00000965
	add r2, r2, r3
	strb r5, [r2]
	add r4, r4, #1
	ldrb r0, [r4]
	cmp r0, #255
	beq _080CB60A
	add r5, r1, #0
_080CB5F6:
	add r0, r4, #0
	bl sub_080CB638
	ldrb r0, [r5]
	add r0, r0, #1
	strb r0, [r5]
	add r4, r4, #3
	ldrb r0, [r4]
	cmp r0, #255
	bne _080CB5F6
_080CB60A:
	pop {r4,r5}
	pop {r0}
	bx r0
_080CB610:
	.4byte gUnknown_08228DF0
_080CB614:
	.4byte gRam
_080CB618:
	.4byte 0x00000B36
_080CB61C:
	.4byte 0x000015F5
_080CB620:
	.4byte 0x000015F4
_080CB624:
	.4byte gUnknown_082293F0
_080CB628:
	.4byte 0x00FFFFFF
_080CB62C:
	.4byte 0x000015F7
_080CB630:
	.4byte 0x00000964
_080CB634:
	.4byte 0x00000965
	THUMB_FUNC_END sub_080CB5A0

