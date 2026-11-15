	THUMB_FUNC_START sub_080A5590
sub_080A5590: @ 0x080A5590
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	ldr r1, _080A560C  @ =gUnknown_0816B308
	ldr r3, _080A5610  @ =gRam
	ldr r2, _080A5614  @ =0x00001732
	add r0, r3, r2
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	ldr r4, _080A5618  @ =0x00000968
	add r0, r3, r4
	ldrh r4, [r0]
	add r1, r1, r4
	add r2, r2, #176
	add r0, r3, r2
	ldrh r0, [r0]
	ldrb r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r7, r0, #16
	ldr r1, _080A561C  @ =gUnknown_081697A0
	ldr r4, _080A5620  @ =0x00000964
	add r0, r3, r4
	mov r2, #0
	ldrsh r0, [r0, r2]
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r2, [r0]
	add r4, r4, #24
	add r0, r3, r4
	strh r2, [r0]
	lsl r0, r2, #1
	ldr r4, _080A5624  @ =0x0000173C
	add r1, r3, r4
	strh r0, [r1]
	add r0, r0, r2
	lsl r0, r0, #16
	lsr r4, r0, #16
	mov r1, #184
	lsl r1, r1, #5
	add r0, r3, r1
	ldrb r0, [r0]
	add r6, r3, #0
	cmp r0, #12
	bne _080A55F0
	b _080A57C8
_080A55F0:
	ldr r2, _080A5628  @ =0x000016C9
	add r0, r6, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	bge _080A5630
	ldr r3, _080A562C  @ =0x000016C8
	add r0, r6, r3
	ldrb r0, [r0]
	cmp r0, #239
	bls _080A5636
	mov r0, #0
	b _080A5636
_080A560C:
	.4byte gUnknown_0816B308
_080A5610:
	.4byte gRam
_080A5614:
	.4byte 0x00001732
_080A5618:
	.4byte 0x00000968
_080A561C:
	.4byte gUnknown_081697A0
_080A5620:
	.4byte 0x00000964
_080A5624:
	.4byte 0x0000173C
_080A5628:
	.4byte 0x000016C9
_080A562C:
	.4byte 0x000016C8
_080A5630:
	ldr r1, _080A57D4  @ =0x000016C8
	add r0, r6, r1
	ldrb r0, [r0]
_080A5636:
	ldr r2, _080A57D8  @ =0x0000097D
	add r3, r6, r2
	mov r1, #0
	strb r0, [r3]
	sub r2, r2, #1
	add r0, r6, r2
	strb r1, [r0]
	ldr r0, _080A57DC  @ =0x00000961
	add r1, r6, r0
	ldr r2, _080A57E0  @ =gUnknown_08169180
	add r0, r4, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #0
	ldrsb r1, [r3, r1]
	sub r0, r0, r1
	lsl r0, r0, #16
	lsr r0, r0, #16
	mov r8, r0
	mov r3, #150
	lsl r3, r3, #4
	add r1, r6, r3
	add r0, r4, #1
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	ldrb r1, [r1]
	add r0, r0, r1
	lsl r0, r0, #16
	lsr r5, r0, #16
	ldr r1, _080A57E4  @ =0x00000975
	add r0, r6, r1
	mov r3, r8
	strb r3, [r0]
	sub r1, r1, #1
	add r0, r6, r1
	strb r5, [r0]
	add r0, r4, #2
	add r0, r0, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	ldr r2, _080A57E8  @ =0x0000096C
	add r1, r6, r2
	strh r0, [r1]
	ldr r2, _080A57EC  @ =0xFFFFF000
	and r2, r2, r0
	mov r0, #240
	lsl r0, r0, #8
	cmp r2, r0
	beq _080A5722
	ldr r3, _080A57F0  @ =0x00001723
	add r0, r6, r3
	ldrb r1, [r0]
	ldr r4, _080A57F4  @ =0x00001724
	add r0, r6, r4
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	orr r2, r2, r1
	ldr r1, _080A57F8  @ =0x000017D6
	add r0, r6, r1
	ldrh r0, [r0]
	orr r2, r2, r0
	lsl r0, r2, #16
	lsr r1, r0, #16
	add r0, r7, #0
	bl sub_080A452C
	lsr r0, r7, #2
	lsl r0, r0, #3
	mov r2, #170
	lsl r2, r2, #3
	add r1, r6, r2
	add r3, r0, r1
	ldr r0, _080A57FC  @ =gUnknown_03003E68
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A5708
	ldr r0, _080A5800  @ =0x000001FF
	add r4, r0, #0
	add r0, r5, #0
	and r0, r0, r4
	ldrh r1, [r3, #2]
	ldr r6, _080A5804  @ =0xFFFFFE00
	add r2, r6, #0
	and r2, r2, r1
	orr r2, r2, r0
	strh r2, [r3, #2]
	mov r1, r8
	strb r1, [r3]
	cmp r5, #240
	bls _080A5708
	lsl r0, r2, #23
	lsr r0, r0, #23
	mov r1, #128
	lsl r1, r1, #1
	orr r0, r0, r1
	and r0, r0, r4
	and r2, r2, r6
	orr r2, r2, r0
	strh r2, [r3, #2]
_080A5708:
	ldr r1, _080A5808  @ =gRam
	ldr r3, _080A580C  @ =0x00000964
	add r2, r1, r3
	mov r0, #0
	strh r0, [r2]
	ldr r4, _080A5810  @ =0x00000974
	add r0, r1, r4
	ldrb r0, [r0]
	add r6, r1, #0
	cmp r0, #247
	ble _080A5722
	mov r0, #1
	strh r0, [r2]
_080A5722:
	ldr r1, _080A5814  @ =0x00001718
	add r0, r6, r1
	ldrb r0, [r0]
	cmp r0, #31
	beq _080A57C8
	ldr r2, _080A57E8  @ =0x0000096C
	add r0, r6, r2
	ldrh r1, [r0]
	mov r0, #240
	lsl r0, r0, #4
	add r2, r0, #0
	and r2, r2, r1
	cmp r2, r0
	beq _080A57C8
	lsl r1, r2, #4
	ldr r3, _080A57F0  @ =0x00001723
	add r0, r6, r3
	ldrb r2, [r0]
	ldr r4, _080A57F4  @ =0x00001724
	add r0, r6, r4
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r2, r0
	orr r1, r1, r2
	ldr r2, _080A57F8  @ =0x000017D6
	add r0, r6, r2
	ldrh r0, [r0]
	orr r1, r1, r0
	mov r0, #2
	orr r1, r1, r0
	lsl r1, r1, #16
	lsr r1, r1, #16
	add r4, r7, #4
	lsl r4, r4, #16
	lsr r0, r4, #16
	bl sub_080A452C
	mov r3, #150
	lsl r3, r3, #4
	add r0, r6, r3
	ldr r2, _080A5818  @ =0x0000097C
	add r1, r6, r2
	ldrh r0, [r0]
	ldrh r1, [r1]
	sub r0, r0, r1
	mov r3, #128
	lsl r3, r3, #4
	add r0, r0, r3
	lsl r0, r0, #16
	lsr r1, r0, #16
	mov r5, #255
	and r5, r5, r1
	lsr r1, r1, #8
	lsr r4, r4, #18
	lsl r4, r4, #3
	mov r2, #170
	lsl r2, r2, #3
	add r0, r6, r2
	add r3, r4, r0
	ldr r0, _080A57FC  @ =gUnknown_03003E68
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A57C8
	ldr r0, _080A5800  @ =0x000001FF
	add r4, r0, #0
	ldrh r0, [r3, #2]
	ldr r6, _080A5804  @ =0xFFFFFE00
	add r2, r6, #0
	and r2, r2, r0
	orr r2, r2, r5
	strh r2, [r3, #2]
	strb r1, [r3]
	cmp r5, #240
	bls _080A57C8
	lsl r0, r2, #23
	lsr r0, r0, #23
	mov r1, #128
	lsl r1, r1, #1
	orr r0, r0, r1
	and r0, r0, r4
	and r2, r2, r6
	orr r2, r2, r0
	strh r2, [r3, #2]
_080A57C8:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A57D4:
	.4byte 0x000016C8
_080A57D8:
	.4byte 0x0000097D
_080A57DC:
	.4byte 0x00000961
_080A57E0:
	.4byte gUnknown_08169180
_080A57E4:
	.4byte 0x00000975
_080A57E8:
	.4byte 0x0000096C
_080A57EC:
	.4byte 0xFFFFF000
_080A57F0:
	.4byte 0x00001723
_080A57F4:
	.4byte 0x00001724
_080A57F8:
	.4byte 0x000017D6
_080A57FC:
	.4byte gUnknown_03003E68
_080A5800:
	.4byte 0x000001FF
_080A5804:
	.4byte 0xFFFFFE00
_080A5808:
	.4byte gRam
_080A580C:
	.4byte 0x00000964
_080A5810:
	.4byte 0x00000974
_080A5814:
	.4byte 0x00001718
_080A5818:
	.4byte 0x0000097C
	THUMB_FUNC_END sub_080A5590

