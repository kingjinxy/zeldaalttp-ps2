	THUMB_FUNC_START sub_0804A498
sub_0804A498: @ 0x0804A498
	push {r4,r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	cmp r1, #0
	bne _0804A4F2
	ldr r0, [r7]
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	ldr r1, _0804A558  @ =gUnknown_0813F82C
	str r1, [r0, #72]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #43
	ldrb r0, [r1]
	lsr r1, r0, #2
	add r0, r1, #0
	add r1, r0, #0
	add r1, r1, #11
	add r2, r1, #0
	lsl r0, r2, #24
	lsr r1, r0, #24
	ldr r0, [r7]
	bl sub_08003870
_0804A4F2:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	mov r1, #128
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0804A568
	ldr r0, [r7]
	ldr r1, [r0, #76]
	add r0, r1, #0
	add r1, r1, #68
	ldrb r0, [r1]
	cmp r0, #6
	bls _0804A568
	ldr r0, [r7]
	bl sub_0804CA20
	ldr r0, _0804A55C  @ =gUnknown_03006C80
	ldr r1, [r0, #28]
	ldr r0, _0804A560  @ =0x00008C9F
	cmp r1, r0
	bhi _0804A54E
	ldr r4, _0804A564  @ =gUnknown_0813F818
	bl sub_0800099C
	mov r1, #7
	and r0, r0, r1
	add r1, r4, r0
	ldrb r2, [r1]
	mov r0, #0
	add r1, r2, #0
	mov r2, #1
	bl sub_0804C8A8
	str r0, [r7, #4]
	ldr r0, [r7, #4]
	cmp r0, #0
	beq _0804A54E
	ldr r1, [r7, #4]
	ldr r0, [r7]
	bl sub_0803D3D0
_0804A54E:
	ldr r0, [r7]
	bl DeleteThisEntity
	b _0804A57C
	.byte 0x00
	.byte 0x00
_0804A558:
	.4byte gUnknown_0813F82C
_0804A55C:
	.4byte gUnknown_03006C80
_0804A560:
	.4byte 0x00008C9F
_0804A564:
	.4byte gUnknown_0813F818
_0804A568:
	ldr r0, [r7]
	bl 0x08009FB8
	ldr r0, [r7]
	ldrh r1, [r0, #44]
	cmp r1, #0
	beq _0804A57C
	ldr r0, [r7]
	bl DeleteThisEntity
_0804A57C:
	add sp, sp, #8
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804A498

