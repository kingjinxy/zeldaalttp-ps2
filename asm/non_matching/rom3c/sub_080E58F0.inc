	THUMB_FUNC_START sub_080E58F0
sub_080E58F0: @ 0x080E58F0
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r5, r4, #0
	ldr r6, _080E5950  @ =gRam
	ldr r1, _080E5954  @ =0x00000FA2
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #6
	beq _080E5960
	add r0, r4, #0
	bl sub_080C6240
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E5986
	add r0, r4, #0
	bl sub_080C4F98
	add r0, r4, #0
	bl Sprite3_Move
	ldr r1, _080E5958  @ =0x00000996
	add r0, r6, r1
	ldrb r1, [r0]
	add r0, r4, #0
	eor r0, r0, r1
	mov r1, #3
	and r0, r0, r1
	cmp r0, #0
	bne _080E5986
	add r0, r4, #0
	bl sub_080C6F48
	ldr r1, _080E595C  @ =0x00001042
	add r0, r6, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E5986
	add r0, r4, #0
	bl sub_080E5B38
	b _080E5986
_080E5950:
	.4byte gRam
_080E5954:
	.4byte 0x00000FA2
_080E5958:
	.4byte 0x00000996
_080E595C:
	.4byte 0x00001042
_080E5960:
	add r0, r5, #0
	bl sub_080E5990
	add r0, r5, #0
	bl Sprite3_CheckIfActive_Permissive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E5986
	ldr r1, _080E598C  @ =0x00000FC2
	add r0, r6, r1
	add r0, r5, r0
	ldrb r0, [r0]
	cmp r0, #30
	bne _080E5986
	add r0, r5, #0
	mov r1, #109
	bl sub_080CF0AC
_080E5986:
	pop {r4-r6}
	pop {r0}
	bx r0
_080E598C:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080E58F0

