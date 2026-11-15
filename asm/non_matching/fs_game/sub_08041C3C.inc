	THUMB_FUNC_START sub_08041C3C
sub_08041C3C: @ 0x08041C3C
	push {r4,r5,r7,lr}
	sub sp, sp, #20
	mov r7, sp
	str r0, [r7]
	ldr r0, _08041CDC  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	str r0, [r7, #16]
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	cmp r1, #0
	bne _08041C64
	b _08041FD0
_08041C64:
	ldr r0, [r7]
	bl GetNextFrame
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #108
	ldrb r0, [r1]
	cmp r0, #23
	bhi _08041C9C
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #28]
	lsl r3, r2, #30
	lsr r1, r3, #30
	mov r2, #1
	eor r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	and r1, r1, r3
	ldrb r2, [r0, #28]
	mov r3, #252
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #28]
_08041C9C:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #108
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #108
	ldrb r3, [r2]
	sub r1, r3, #1
	add r2, r0, #0
	add r0, r0, #108
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #108
	ldrb r0, [r1]
	cmp r0, #0
	bne _08041CE0
	ldr r0, [r7]
	bl sub_08000620
	ldr r0, [r7]
	bl DeleteThisEntity
	b _080421FC
_08041CDC:
	.4byte gUnknown_03006A30
_08041CE0:
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #100]
	add r1, r2, #0
	ldrh r0, [r0, #50]
	add r1, r1, r0
	add r2, r1, #0
	lsl r0, r2, #16
	lsr r2, r0, #16
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r3, [r1, #104]
	add r1, r3, #0
	ldrh r0, [r0, #54]
	add r1, r1, r0
	add r3, r1, #0
	lsl r0, r3, #16
	lsr r3, r0, #16
	ldr r0, [r7]
	mov r1, #4
	bl 0x080017EC
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08041D30
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #68
	ldrb r0, [r1]
	cmp r0, #3
	bhi _08041D2E
	ldr r0, [r7]
	bl sub_08000620
	ldr r0, [r7]
	bl DeleteThisEntity
	b _080421FC
_08041D2E:
	b _08041FCE
_08041D30:
	ldr r0, [r7]
	bl sub_0803CC20
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	add r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #68
	ldrb r0, [r1]
	cmp r0, #3
	bls _08041D7A
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #7
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _08041D7A
	ldr r0, [r7]
	mov r1, #20
	mov r2, #0
	bl sub_0804CB38
_08041D7A:
	ldr r0, [r7]
	ldrb r1, [r0, #11]
	cmp r1, #0
	bne _08041D88
	ldr r0, [r7]
	bl 0x0800402C
_08041D88:
	ldr r0, [r7]
	bl sub_0803F0E4
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #80
	ldrh r2, [r1]
	add r0, r2, #0
	bl sub_08015DC0
	str r0, [r7, #4]
	add r0, r7, #0
	add r0, r0, #8
	ldr r1, [r7, #4]
	ldr r3, [r7]
	mov r4, #50
	ldrsh r2, [r3, r4]
	ldr r3, _08041F84  @ =gUnknown_03000450
	ldrh r4, [r3, #24]
	sub r3, r2, r4
	asr r2, r3, #4
	ldr r4, [r7]
	mov r5, #54
	ldrsh r3, [r4, r5]
	ldr r4, _08041F84  @ =gUnknown_03000450
	ldrh r5, [r4, #26]
	sub r3, r3, r5
	asr r4, r3, #4
	lsl r3, r4, #6
	orr r2, r2, r3
	add r3, r2, #0
	lsl r2, r3, #1
	add r1, r1, #4
	add r2, r1, r2
	ldrh r1, [r2]
	lsl r2, r1, #21
	lsr r1, r2, #21
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, [r7, #4]
	add r1, r7, #0
	add r1, r1, #8
	ldrh r2, [r1]
	add r3, r2, #0
	lsl r1, r3, #1
	add r2, r0, #0
	ldr r2, _08041F88  @ =0x00005004
	add r0, r0, r2
	add r1, r0, r1
	ldrh r0, [r1]
	ldr r1, _08041F8C  @ =0x08008840
	bl 0x080012CC
	lsl r1, r0, #16
	lsr r0, r1, #16
	cmp r0, #0
	bne _08041ED0
	ldr r0, [r7]
	bl 0x0800935C
	lsl r1, r0, #16
	lsr r0, r1, #16
	cmp r0, #70
	beq _08041ED0
	ldr r1, _08041F90  @ =0x08003538
	ldr r0, [r7]
	ldrh r2, [r0, #50]
	ldr r0, [r7]
	ldrh r3, [r0, #54]
	ldr r0, [r7]
	bl 0x08003748
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08041ED0
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #30
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #1
	ldrb r2, [r0, #20]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #20]
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #68
	ldrb r0, [r1]
	cmp r0, #3
	bls _08041E7C
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #35
	ldrb r3, [r2]
	add r1, r3, #0
	sub r1, r1, #13
	add r2, r0, #0
	add r0, r0, #35
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_08041E7C:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #35
	ldrb r0, [r1]
	add r1, r0, #2
	add r2, r1, #0
	lsl r0, r2, #24
	lsr r1, r0, #24
	ldr r0, [r7]
	bl sub_08003870
	ldr r0, [r7]
	bl sub_08000620
	ldr r0, [r7]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #60
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	strb r3, [r1]
	mov r1, #0
	str r1, [r0, #12]
	ldr r0, [r7]
	ldr r2, [r7]
	ldr r1, [r2, #48]
	cmp r1, #0
	bge _08041EBA
	mov r1, #0
_08041EBA:
	str r1, [r0, #48]
	ldr r0, [r7]
	ldr r2, [r7]
	ldr r1, [r2, #52]
	cmp r1, #0
	bge _08041EC8
	mov r1, #0
_08041EC8:
	str r1, [r0, #52]
	mov r0, #144
	bl sub_08003DFC
_08041ED0:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	cmp r0, #0
	bne _08041EDE
	b _08041FCE
_08041EDE:
	ldr r0, [r7]
	bl sub_08000620
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	mov r1, #63
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _08041F94
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #65
	ldrb r0, [r1]
	mov r1, #63
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #21
	bhi _08041F94
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
	ldrb r1, [r0, #20]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #20]
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #43
	ldrb r1, [r2]
	mov r2, #16
	eor r1, r1, r2
	add r2, r0, #0
	add r0, r0, #43
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	mov r1, #128
	lsl r1, r1, #1
	str r1, [r0, #12]
	ldr r0, [r7]
	mov r1, #128
	lsl r1, r1, #8
	str r1, [r0, #16]
	ldr r0, [r7]
	mov r1, #8
	bl sub_08003870
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #60
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	b _08041FCE
_08041F84:
	.4byte gUnknown_03000450
_08041F88:
	.4byte 0x00005004
_08041F8C:
	.4byte 0x08008840
_08041F90:
	.4byte 0x08003538
_08041F94:
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #20]
	add r1, r2, #1
	ldrb r2, [r0, #20]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #20]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #23]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #252
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #28]
_08041FCE:
	b _080421FC
_08041FD0:
	ldr r0, _08042060  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r2, r0, r1
	add r0, r2, #0
	add r1, r2, #0
	add r1, r1, #33
	ldrb r0, [r1]
	cmp r0, #0
	beq _0804207C
	ldr r0, _08042060  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r2, r0, r1
	add r0, r2, #0
	add r1, r2, #0
	add r1, r1, #33
	ldrb r0, [r1]
	cmp r0, #119
	bhi _08042064
	ldr r0, _08042060  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r2, r0, r1
	add r0, r2, #0
	add r1, r2, #0
	add r1, r1, #33
	ldr r0, _08042060  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldr r1, _08042060  @ =gUnknown_03006A30
	ldr r3, [r7]
	ldrb r2, [r3, #10]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r3, r1, r2
	add r1, r3, #0
	add r2, r3, #0
	add r2, r2, #33
	ldrb r3, [r2]
	add r1, r3, #1
	add r2, r0, #0
	add r0, r0, #33
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	b _0804207C
	.byte 0x00
	.byte 0x00
_08042060:
	.4byte gUnknown_03006A30
_08042064:
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #68
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #6
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
_0804207C:
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #68
	ldrb r0, [r1]
	cmp r0, #3
	bls _080420C4
	ldr r0, _080420B4  @ =gUnknown_03000E20
	ldrh r1, [r0]
	mov r2, #7
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	cmp r0, #3
	bhi _080420B8
	ldr r0, [r7]
	ldrb r1, [r0, #30]
	mov r2, #240
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #30]
	b _080420C4
	.byte 0x00
	.byte 0x00
_080420B4:
	.4byte gUnknown_03000E20
_080420B8:
	ldr r0, [r7]
	ldrb r1, [r0, #30]
	mov r2, #240
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #30]
_080420C4:
	ldr r0, [r7]
	ldr r1, [r7, #16]
	add r2, r1, #0
	add r1, r1, #33
	add r2, r0, #0
	add r0, r0, #33
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r1, [r7, #16]
	add r0, r1, #0
	add r1, r1, #41
	ldrb r0, [r1]
	mov r1, #1
	and r0, r0, r1
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0804217C
	bl sub_080123E8
	str r0, [r7, #12]
	ldr r0, [r7, #12]
	cmp r0, #0
	beq _0804217C
	ldr r0, [r7, #12]
	ldrb r1, [r0, #9]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #9]
	ldr r0, [r7, #12]
	ldrb r1, [r0, #8]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #8
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #8]
	ldr r0, [r7, #12]
	ldr r1, [r7]
	ldrb r2, [r0, #10]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1, #10]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #10]
	ldr r0, [r7, #12]
	ldrb r1, [r0, #24]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #24]
	ldr r0, [r7, #12]
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #68
	add r2, r0, #0
	add r0, r0, #68
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r1, [r7, #12]
	mov r0, #2
	bl sub_08012728
_0804217C:
	ldr r0, _080421B8  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #4]
	cmp r1, #0
	beq _080421BC
	ldr r0, _080421B8  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	ldrb r1, [r0, #4]
	mov r2, #8
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _080421BC
	b _080421FC
	.byte 0x00
	.byte 0x00
_080421B8:
	.4byte gUnknown_03006A30
_080421BC:
	ldr r0, _08042204  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #44
	add r1, r0, r1
	mov r0, #0
	str r0, [r1]
	ldr r0, _08042204  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #10]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, r1
	add r1, r0, #0
	add r0, r0, #33
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	bl sub_08000620
	ldr r0, [r7]
	bl DeleteThisEntity
_080421FC:
	add sp, sp, #20
	pop {r4,r5,r7}
	pop {r0}
	bx r0
_08042204:
	.4byte gUnknown_03006A30
	THUMB_FUNC_END sub_08041C3C

