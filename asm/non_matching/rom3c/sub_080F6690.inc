	THUMB_FUNC_START sub_080F6690
sub_080F6690: @ 0x080F6690
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_080C58F0
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #0
	bne _080F6700
	add r0, r4, #0
	bl Sprite3_Move
	add r0, r4, #0
	bl sub_080C2C4C
	ldr r3, _080F6708  @ =gRam
	ldr r0, _080F670C  @ =0x00001152
	add r1, r3, r0
	add r1, r4, r1
	ldrb r0, [r1]
	sub r0, r0, #2
	strb r0, [r1]
	ldr r1, _080F6710  @ =0x00001142
	add r0, r3, r1
	add r2, r4, r0
	ldrb r1, [r2]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _080F6700
	strb r5, [r2]
	ldr r0, _080F6714  @ =0x00000F52
	add r1, r3, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080F6718  @ =0x00000FC2
	add r0, r3, r1
	add r0, r4, r0
	mov r1, #19
	strb r1, [r0]
	ldr r0, _080F671C  @ =0x00001012
	add r1, r3, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #41
	bl sub_080CF0AC
_080F6700:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080F6708:
	.4byte gRam
_080F670C:
	.4byte 0x00001152
_080F6710:
	.4byte 0x00001142
_080F6714:
	.4byte 0x00000F52
_080F6718:
	.4byte 0x00000FC2
_080F671C:
	.4byte 0x00001012
	THUMB_FUNC_END sub_080F6690

