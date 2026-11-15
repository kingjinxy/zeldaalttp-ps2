	THUMB_FUNC_START sub_080D4660
sub_080D4660: @ 0x080D4660
	push {r4,r5,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080D46F8
	bl sub_0809E3CC
	cmp r0, #0
	bne _080D46F8
	add r0, r4, #0
	bl sub_080C500C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080D46F8
	ldr r5, _080D4700  @ =gRam
	ldr r1, _080D4704  @ =0x000016D5
	add r0, r5, r1
	ldrb r0, [r0]
	cmp r0, #2
	bne _080D46F8
	ldr r0, _080D4708  @ =gPendantCount
	ldrb r1, [r0]
	mov r0, #7
	and r0, r0, r1
	cmp r0, #7
	bne _080D46F8
	ldr r1, _080D470C  @ =gUnknown_03003E70
	mov r0, #1
	strb r0, [r1]
	ldr r1, _080D4710  @ =0x00000546
	add r0, r5, r1
	ldrh r1, [r0]
	mov r0, #129
	lsl r0, r0, #7
	and r0, r0, r1
	cmp r0, #0
	beq _080D46F8
	ldr r0, _080D4714  @ =0x00000A3C
	add r1, r5, r0
	mov r0, #25
	strh r0, [r1]
	ldr r0, _080D4718  @ =0x0000180D
	add r1, r5, r0
	mov r0, #1
	strb r0, [r1]
	add r0, r4, #0
	mov r1, #9
	bl sub_080D4DA4
	add r0, r4, #0
	mov r1, #11
	bl sub_080D4DA4
	add r0, r4, #0
	mov r1, #15
	bl sub_080D4DA4
	add r0, r4, #0
	bl sub_080D5414
	ldr r0, _080D471C  @ =0x00000F52
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080D4720  @ =0x00000FC2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #240
	strb r1, [r0]
_080D46F8:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080D4700:
	.4byte gRam
_080D4704:
	.4byte 0x000016D5
_080D4708:
	.4byte gPendantCount
_080D470C:
	.4byte gUnknown_03003E70
_080D4710:
	.4byte 0x00000546
_080D4714:
	.4byte 0x00000A3C
_080D4718:
	.4byte 0x0000180D
_080D471C:
	.4byte 0x00000F52
_080D4720:
	.4byte 0x00000FC2
	THUMB_FUNC_END sub_080D4660

