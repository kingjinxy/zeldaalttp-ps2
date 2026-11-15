	THUMB_FUNC_START sub_080E4474
sub_080E4474: @ 0x080E4474
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _080E44AC  @ =gRam
	ldr r1, _080E44B0  @ =0x00000F82
	add r0, r5, r1
	add r6, r4, r0
	ldrb r0, [r6]
	cmp r0, #1
	bls _080E453C
	add r0, r4, #0
	bl sub_080E4B00
	ldr r2, _080E44B4  @ =0x00000FD2
	add r0, r5, r2
	add r0, r4, r0
	ldrb r1, [r0]
	cmp r1, #0
	bne _080E44B8
	sub r2, r2, #48
	add r0, r5, r2
	add r0, r4, r0
	strb r1, [r0]
	b _080E468E
	.byte 0x00
	.byte 0x00
_080E44AC:
	.4byte gRam
_080E44B0:
	.4byte 0x00000F82
_080E44B4:
	.4byte 0x00000FD2
_080E44B8:
	add r0, r4, #0
	bl Sprite3_CheckIfActive_Permissive
	lsl r0, r0, #24
	cmp r0, #0
	beq _080E44C6
	b _080E468E
_080E44C6:
	ldrb r0, [r6]
	cmp r0, #2
	beq _080E44CE
	b _080E468E
_080E44CE:
	mov r2, #15
	add r6, r5, #0
	ldr r0, _080E452C  @ =0x000010C2
	add r7, r6, r0
_080E44D6:
	ldr r1, _080E4530  @ =0x000015DC
	add r0, r6, r1
	ldrb r1, [r0]
	lsl r0, r2, #24
	asr r2, r0, #24
	add r5, r0, #0
	cmp r1, r2
	beq _080E4512
	ldr r1, _080E4534  @ =0x00000FA2
	add r0, r6, r1
	add r0, r2, r0
	ldrb r0, [r0]
	cmp r0, #8
	bls _080E4512
	ldr r1, _080E4538  @ =0x00000996
	add r0, r6, r1
	ldrb r0, [r0]
	eor r0, r0, r2
	mov r1, #7
	and r0, r0, r1
	add r1, r2, r7
	ldrb r1, [r1]
	orr r0, r0, r1
	cmp r0, #0
	bne _080E4512
	lsr r1, r5, #24
	add r0, r4, #0
	mov r2, #8
	bl sub_080E46C8
_080E4512:
	mov r2, #255
	lsl r2, r2, #24
	add r0, r5, r2
	lsr r2, r0, #24
	cmp r0, #0
	bge _080E44D6
	add r0, r4, #0
	bl sub_080C4F98
	add r0, r4, #0
	bl sub_0808EEE4
	b _080E468E
_080E452C:
	.4byte 0x000010C2
_080E4530:
	.4byte 0x000015DC
_080E4534:
	.4byte 0x00000FA2
_080E4538:
	.4byte 0x00000996
_080E453C:
	mov r6, #0
	mov r8, r6
	mov r7, #0
	ldr r1, _080E4594  @ =0x00001062
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	beq _080E455C
	ldr r2, _080E4598  @ =0x00000D94
	add r0, r5, r2
	add r0, r4, r0
	ldrb r2, [r0]
	mov r1, #48
	orr r1, r1, r2
	strb r1, [r0]
_080E455C:
	add r0, r4, #0
	bl sub_080C6240
	ldr r1, _080E459C  @ =0x00000F92
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #1
	bne _080E4576
	ldr r0, _080E45A0  @ =gUnknown_03003E74
	ldrh r0, [r0]
	bl sub_08115AD0
_080E4576:
	ldr r2, _080E45A4  @ =0x000010C2
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E45BC
	ldr r1, _080E45A8  @ =0x00000FD2
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #63
	bls _080E45AC
	mov r7, #1
	b _080E45B8
	.byte 0x00
	.byte 0x00
_080E4594:
	.4byte 0x00001062
_080E4598:
	.4byte 0x00000D94
_080E459C:
	.4byte 0x00000F92
_080E45A0:
	.4byte gUnknown_03003E74
_080E45A4:
	.4byte 0x000010C2
_080E45A8:
	.4byte 0x00000FD2
_080E45AC:
	cmp r0, #1
	beq _080E45B6
	mov r2, #1
	mov r8, r2
	b _080E45B8
_080E45B6:
	mov r6, #1
_080E45B8:
	cmp r6, #0
	beq _080E4620
_080E45BC:
	ldr r5, _080E469C  @ =gRam
	ldr r1, _080E46A0  @ =0x000010C2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #0
	strb r1, [r0]
	ldr r2, _080E46A4  @ =0x00000FA2
	add r0, r5, r2
	add r6, r4, r0
	ldrb r0, [r6]
	cmp r0, #10
	bne _080E45E0
	ldr r2, _080E46A8  @ =0x00001792
	add r0, r5, r2
	strb r1, [r0]
	sub r2, r2, #1
	add r0, r5, r2
	strb r1, [r0]
_080E45E0:
	add r0, r4, #0
	mov r1, #41
	bl sub_080CF0AC
	ldr r0, _080E46AC  @ =0x00000F82
	add r1, r5, r0
	add r1, r4, r1
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
	ldr r1, _080E46B0  @ =0x00001132
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #9
	strb r1, [r0]
	ldr r2, _080E46B4  @ =0x00001122
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #2
	strb r1, [r0]
	ldr r1, _080E46B8  @ =0x00000FD2
	add r0, r5, r1
	add r0, r4, r0
	mov r1, #31
	strb r1, [r0]
	mov r0, #6
	strb r0, [r6]
	ldr r2, _080E46BC  @ =0x00001012
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #3
	strb r1, [r0]
_080E4620:
	mov r0, r8
	cmp r0, #0
	beq _080E4648
	ldr r0, _080E469C  @ =gRam
	ldr r1, _080E46B4  @ =0x00001122
	add r3, r0, r1
	add r3, r4, r3
	ldrb r1, [r3]
	mov r2, #241
	and r2, r2, r1
	ldr r1, _080E46B8  @ =0x00000FD2
	add r0, r0, r1
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #1
	mov r1, #14
	and r0, r0, r1
	orr r2, r2, r0
	strb r2, [r3]
	mov r7, #1
_080E4648:
	cmp r7, #0
	beq _080E468E
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _080E468E
	ldr r5, _080E469C  @ =gRam
	ldr r2, _080E46C0  @ =0x000010B2
	add r0, r5, r2
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _080E466E
	mov r0, sp
	add r1, r4, #0
	bl sub_080C4948
_080E466E:
	add r0, r4, #0
	bl Sprite3_Move
	ldr r1, _080E46C4  @ =0x000009B2
	add r0, r5, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	cmp r0, #0
	beq _080E4688
	add r0, r4, #0
	bl sub_080C79F8
_080E4688:
	add r0, r4, #0
	bl sub_080C8168
_080E468E:
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E469C:
	.4byte gRam
_080E46A0:
	.4byte 0x000010C2
_080E46A4:
	.4byte 0x00000FA2
_080E46A8:
	.4byte 0x00001792
_080E46AC:
	.4byte 0x00000F82
_080E46B0:
	.4byte 0x00001132
_080E46B4:
	.4byte 0x00001122
_080E46B8:
	.4byte 0x00000FD2
_080E46BC:
	.4byte 0x00001012
_080E46C0:
	.4byte 0x000010B2
_080E46C4:
	.4byte 0x000009B2
	THUMB_FUNC_END sub_080E4474

