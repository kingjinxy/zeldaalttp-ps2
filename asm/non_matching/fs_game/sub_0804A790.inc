	THUMB_FUNC_START sub_0804A790
sub_0804A790: @ 0x0804A790
	push {r4,r5,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r1, [r7]
	ldrb r0, [r1, #11]
	cmp r0, #4
	bls _0804A7A2
	b _0804AB28
_0804A7A2:
	lsl r1, r0, #2
	ldr r2, _0804A7AC  @ =0x0804A7B0
	add r0, r1, r2
	ldr r1, [r0]
	mov pc, r1
_0804A7AC:
	.4byte 0x0804A7B0
	.4byte _0804A7C4
	.4byte _0804A8CC
	.4byte _0804A954
	.4byte _0804A9CC
	.4byte _0804AA94
_0804A7C4:
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r7]
	ldrb r3, [r2, #23]
	add r2, r3, #7
	add r3, r2, #0
	mov r4, #15
	and r3, r3, r4
	ldrb r4, [r1, #30]
	mov r5, #240
	and r4, r4, r5
	add r5, r4, #0
	add r4, r5, #0
	orr r4, r4, r3
	add r3, r4, #0
	strb r3, [r1, #30]
	mov r3, #15
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	lsl r1, r2, #4
	ldrb r2, [r0, #30]
	mov r3, #15
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #30]
	ldr r0, [r7]
	mov r1, #128
	lsl r1, r1, #1
	str r1, [r0, #12]
	ldr r0, _0804A874  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #23]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r2, [r1]
	ldr r0, [r7]
	add r1, r2, #0
	bl 0x08003F4C
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #43
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strb r2, [r1]
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #3
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #24]
	ldr r0, [r7]
	ldr r1, [r7]
	ldr r2, [r1, #84]
	ldrb r1, [r2, #10]
	str r1, [r0, #112]
	ldr r0, [r7]
	mov r1, #0
	str r1, [r0, #116]
	ldr r0, _0804A878  @ =gUnknown_03006C80
	ldrb r1, [r0, #6]
	cmp r1, #1
	bne _0804A87C
	ldr r0, [r7]
	ldr r1, [r0, #112]
	cmp r1, #4
	bne _0804A870
	ldr r0, [r7]
	mov r1, #2
	str r1, [r0, #112]
_0804A870:
	b _0804A88A
	.byte 0x00
	.byte 0x00
_0804A874:
	.4byte gUnknown_03006A30
_0804A878:
	.4byte gUnknown_03006C80
_0804A87C:
	ldr r0, [r7]
	ldr r1, [r0, #112]
	cmp r1, #3
	bne _0804A88A
	ldr r0, [r7]
	mov r1, #4
	str r1, [r0, #112]
_0804A88A:
	mov r0, #159
	bl sub_08003DFC
	bl sub_0800099C
	mov r1, #3
	and r0, r0, r1
	cmp r0, #0
	bne _0804A8CA
	bl sub_0800099C
	mov r1, #3
	and r0, r0, r1
	cmp r0, #2
	beq _0804A8BA
	cmp r0, #2
	bcc _0804A8B2
	cmp r0, #3
	beq _0804A8C2
	b _0804A8CA
_0804A8B2:
	mov r0, #7
	bl sub_0800D6A4
	b _0804A8CA
_0804A8BA:
	mov r0, #8
	bl sub_0800D6A4
	b _0804A8CA
_0804A8C2:
	mov r0, #9
	bl sub_0800D6A4
	b _0804A8CA
_0804A8CA:
	b _0804AB28
_0804A8CC:
	ldr r0, _0804A950  @ =gUnknown_03006A30
	ldr r2, [r7]
	ldrb r1, [r2, #23]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r2, [r1]
	ldr r0, [r7]
	add r1, r2, #0
	bl 0x08003F4C
	ldr r1, [r7]
	add r2, r1, #0
	add r1, r1, #43
	ldrb r2, [r1]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	orr r0, r0, r3
	add r2, r0, #0
	strb r2, [r1]
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #20
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #24]
	ldr r0, [r7]
	mov r1, #150
	lsl r1, r1, #1
	str r1, [r0, #112]
	ldr r0, [r7]
	mov r1, #192
	str r1, [r0, #12]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #30]
	mov r3, #240
	and r2, r2, r3
	add r3, r2, #0
	mov r4, #11
	add r2, r3, #0
	orr r2, r2, r4
	add r3, r2, #0
	strb r3, [r1, #30]
	ldrb r1, [r0, #30]
	mov r2, #15
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #176
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #30]
	mov r0, #186
	bl sub_08003DFC
	b _0804AB28
	.byte 0x00
	.byte 0x00
_0804A950:
	.4byte gUnknown_03006A30
_0804A954:
	ldr r0, [r7]
	bl 0x080093A4
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _0804A9C2
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #60
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #24]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #30]
	mov r3, #240
	and r2, r2, r3
	add r3, r2, #0
	mov r4, #11
	add r2, r3, #0
	orr r2, r2, r4
	add r3, r2, #0
	strb r3, [r1, #30]
	ldrb r1, [r0, #30]
	mov r2, #15
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #176
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #30]
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r2, #127
	and r1, r1, r2
	add r2, r0, #0
	add r0, r0, #60
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	b _0804A9CA
_0804A9C2:
	ldr r0, [r7]
	bl DeleteThisEntity
	b _0804ABA8
_0804A9CA:
	b _0804AB28
_0804A9CC:
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #30]
	mov r3, #240
	and r2, r2, r3
	add r3, r2, #0
	mov r4, #11
	add r2, r3, #0
	orr r2, r2, r4
	add r3, r2, #0
	strb r3, [r1, #30]
	ldrb r1, [r0, #30]
	mov r2, #15
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #176
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #30]
	bl sub_0800099C
	add r1, r0, #0
	ldr r0, [r7]
	mov r2, #31
	and r1, r1, r2
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
	bl sub_0800099C
	add r1, r0, #0
	ldr r0, [r7]
	lsl r2, r1, #23
	lsr r1, r2, #23
	str r1, [r0, #12]
	bl sub_0800099C
	add r1, r0, #0
	ldr r0, [r7]
	lsl r2, r1, #14
	lsr r1, r2, #14
	mov r2, #128
	lsl r2, r2, #9
	orr r1, r1, r2
	str r1, [r0, #16]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #46
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #207
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #16
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	ldr r1, [r0, #84]
	ldr r0, [r1, #88]
	ldr r1, [r7]
	cmp r0, r1
	bne _0804AA8C
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #69
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #32
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	mov r1, #1
	str r1, [r0, #112]
_0804AA8C:
	mov r0, #187
	bl sub_08003DFC
	b _0804AB28
_0804AA94:
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #30]
	mov r3, #240
	and r2, r2, r3
	add r3, r2, #0
	mov r4, #11
	add r2, r3, #0
	orr r2, r2, r4
	add r3, r2, #0
	strb r3, [r1, #30]
	ldrb r1, [r0, #30]
	mov r2, #15
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #176
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #30]
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #45
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #24]
	ldr r0, [r7]
	mov r1, #128
	lsl r1, r1, #1
	str r1, [r0, #12]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #46
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #28]
	mov r2, #207
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #16
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #28]
	ldr r0, [r7]
	ldr r2, [r7]
	add r1, r2, #0
	add r2, r2, #60
	ldrb r1, [r2]
	mov r2, #127
	and r1, r1, r2
	add r2, r0, #0
	add r0, r0, #60
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	b _0804AB28
_0804AB28:
	ldr r0, _0804ABB0  @ =gUnknown_0813F8A4
	ldr r1, [r7]
	ldrb r2, [r1, #11]
	add r0, r0, r2
	ldrb r1, [r0]
	ldr r0, [r7]
	bl sub_08003870
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #11]
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
	ldr r1, _0804ABB4  @ =gUnknown_084287D0
	ldr r2, [r7]
	ldrb r3, [r2, #11]
	add r2, r3, #0
	lsl r3, r2, #2
	add r1, r1, r3
	ldr r2, [r1]
	str r2, [r0, #72]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #80
	ldrh r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #128
	lsl r3, r3, #7
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strh r2, [r0]
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #32
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #128
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
_0804ABA8:
	add sp, sp, #4
	pop {r4,r5,r7}
	pop {r0}
	bx r0
_0804ABB0:
	.4byte gUnknown_0813F8A4
_0804ABB4:
	.4byte gUnknown_084287D0
	THUMB_FUNC_END sub_0804A790

