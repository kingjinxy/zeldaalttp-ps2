	THUMB_FUNC_START sub_08044240
sub_08044240: @ 0x08044240
	push {r4,r5,r7,lr}
	sub sp, sp, #24
	mov r7, sp
	str r0, [r7]
	add r0, r1, #0
	add r1, r7, #4
	strh r0, [r1]
	add r0, r7, #0
	add r0, r0, #12
	add r1, r7, #0
	add r1, r1, #13
	mov r2, #0
	strb r2, [r1]
	mov r1, #0
	strb r1, [r0]
	add r0, r7, #0
	add r0, r0, #16
	add r1, r7, #0
	add r1, r1, #16
	add r2, r7, #0
	add r2, r2, #16
	add r3, r7, #0
	add r3, r3, #16
	ldrb r4, [r3, #3]
	mov r5, #255
	orr r4, r4, r5
	add r5, r4, #0
	strb r5, [r3, #3]
	ldrb r3, [r2, #2]
	mov r4, #255
	orr r3, r3, r4
	add r4, r3, #0
	strb r4, [r2, #2]
	ldrb r2, [r1, #1]
	mov r3, #255
	orr r2, r2, r3
	add r3, r2, #0
	strb r3, [r1, #1]
	ldrb r1, [r0]
	mov r2, #255
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
_08044296:
	add r1, r7, #0
	add r1, r1, #13
	ldrb r0, [r1]
	add r2, r0, #0
	lsl r1, r2, #3
	add r1, r1, r0
	lsl r0, r1, #4
	ldr r1, _0804431C  @ =gUnknown_03006A30
	add r0, r1, r0
	str r0, [r7, #8]
	ldr r0, [r7, #8]
	ldrb r1, [r0, #15]
	mov r2, #210
	add r0, r1, #0
	bic r0, r0, r2
	cmp r0, #0
	beq _08044386
	ldr r0, [r7]
	add r1, r0, #0
	add r0, r0, #80
	ldr r1, [r7, #8]
	ldr r2, [r1, #40]
	add r1, r2, #0
	add r2, r2, #80
	ldrh r0, [r0]
	ldrh r1, [r2]
	add r2, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #16
	lsr r0, r1, #16
	lsr r1, r0, #14
	add r0, r1, #0
	lsl r1, r0, #16
	lsr r0, r1, #16
	cmp r0, #0
	beq _08044386
	ldr r0, [r7, #8]
	ldr r1, [r0, #40]
	ldr r0, [r7]
	ldrh r1, [r1, #50]
	ldrh r0, [r0, #50]
	sub r1, r1, r0
	add r0, r1, #0
	add r1, r0, #0
	add r1, r1, #12
	add r0, r1, #0
	lsl r1, r0, #16
	lsr r0, r1, #16
	cmp r0, #24
	bls _08044320
	ldr r0, [r7, #8]
	ldr r1, [r0, #40]
	ldr r0, [r7]
	ldrh r1, [r1, #54]
	ldrh r0, [r0, #54]
	sub r1, r1, r0
	add r0, r1, #0
	add r1, r0, #0
	add r1, r1, #12
	add r0, r1, #0
	lsl r1, r0, #16
	lsr r0, r1, #16
	cmp r0, #24
	bls _08044320
	b _08044386
	.byte 0x00
	.byte 0x00
_0804431C:
	.4byte gUnknown_03006A30
_08044320:
	ldr r0, [r7, #8]
	ldr r1, [r0, #40]
	ldr r0, [r7]
	bl sub_0803CECC
	add r1, r7, #0
	add r1, r1, #20
	strb r0, [r1]
	add r0, r7, #0
	add r0, r0, #20
	ldrb r1, [r0]
	add r0, r1, #0
	add r0, r0, #20
	mov r2, #24
	add r1, r0, #0
	and r1, r1, r2
	asr r0, r1, #2
	ldr r1, [r7, #8]
	ldr r2, [r1, #40]
	add r1, r2, #0
	add r2, r2, #42
	ldrb r1, [r2]
	cmp r0, r1
	bne _08044386
	add r0, r7, #0
	add r0, r0, #16
	add r1, r7, #0
	add r1, r1, #12
	ldrb r2, [r1]
	add r0, r0, r2
	add r1, r7, #0
	add r1, r1, #20
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	add r1, r7, #0
	add r1, r1, #12
	add r0, r7, #0
	add r0, r0, #12
	add r1, r7, #0
	add r1, r1, #12
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
_08044386:
	add r1, r7, #0
	add r1, r1, #13
	add r0, r7, #0
	add r0, r0, #13
	add r1, r7, #0
	add r1, r1, #13
	ldrb r2, [r1]
	add r3, r2, #1
	add r1, r3, #0
	strb r1, [r0]
	ldr r0, _080443A8  @ =gUnknown_03006C80
	lsl r2, r1, #24
	lsr r1, r2, #24
	ldrb r0, [r0]
	cmp r1, r0
	bcc _080443AC
	b _080443AE
_080443A8:
	.4byte gUnknown_03006C80
_080443AC:
	b _08044296
_080443AE:
	add r0, r7, #0
	add r0, r0, #12
	ldrb r1, [r0]
	cmp r1, #0
	bne _080443BA
	b _08044582
_080443BA:
	add r0, r7, #0
	add r0, r0, #13
	mov r1, #0
	strb r1, [r0]
_080443C2:
	add r1, r7, #0
	add r1, r1, #13
	ldrb r0, [r1]
	add r1, r7, #0
	add r1, r1, #12
	ldrb r2, [r1]
	sub r1, r2, #1
	cmp r0, r1
	blt _080443D6
	b _0804448E
_080443D6:
	add r0, r7, #0
	add r0, r0, #14
	add r1, r7, #0
	add r1, r1, #13
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
_080443E6:
	add r0, r7, #0
	add r0, r0, #14
	add r1, r7, #0
	add r1, r1, #12
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bcc _080443F8
	b _08044478
_080443F8:
	add r0, r7, #0
	add r0, r0, #16
	add r1, r7, #0
	add r1, r1, #13
	ldrb r2, [r1]
	add r0, r0, r2
	ldrb r1, [r0]
	add r0, r1, #0
	add r0, r0, #20
	mov r1, #24
	and r0, r0, r1
	add r1, r7, #0
	add r1, r1, #16
	add r2, r7, #0
	add r2, r2, #14
	ldrb r3, [r2]
	add r1, r1, r3
	ldrb r2, [r1]
	add r1, r2, #4
	mov r2, #24
	and r1, r1, r2
	cmp r0, r1
	bne _08044462
	add r0, r7, #0
	add r0, r0, #16
	add r1, r7, #0
	add r1, r1, #13
	ldrb r2, [r1]
	add r0, r0, r2
	ldrb r1, [r0]
	mov r2, #255
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	add r0, r7, #0
	add r0, r0, #16
	add r1, r7, #0
	add r1, r1, #14
	ldrb r2, [r1]
	add r0, r0, r2
	ldrb r1, [r0]
	mov r2, #255
	orr r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	add r0, r7, #0
	add r0, r0, #12
	add r1, r7, #0
	add r1, r1, #12
	ldrb r2, [r1]
	sub r1, r2, #2
	add r2, r1, #0
	strb r2, [r0]
_08044462:
	add r1, r7, #0
	add r1, r1, #14
	add r0, r7, #0
	add r0, r0, #14
	add r1, r7, #0
	add r1, r1, #14
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _080443E6
_08044478:
	add r1, r7, #0
	add r1, r1, #13
	add r0, r7, #0
	add r0, r0, #13
	add r1, r7, #0
	add r1, r1, #13
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _080443C2
_0804448E:
	add r0, r7, #0
	add r0, r0, #13
	mov r1, #0
	strb r1, [r0]
_08044496:
	add r0, r7, #0
	add r0, r0, #13
	ldr r1, _080444A8  @ =gUnknown_03006C80
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bcc _080444AC
	b _08044582
	.byte 0x00
	.byte 0x00
_080444A8:
	.4byte gUnknown_03006C80
_080444AC:
	add r0, r7, #0
	add r0, r0, #16
	add r1, r7, #0
	add r1, r1, #13
	ldrb r2, [r1]
	add r0, r0, r2
	ldrb r1, [r0]
	cmp r1, #255
	beq _0804456C
	add r0, r7, #0
	add r0, r0, #20
	add r1, r7, #0
	add r1, r1, #16
	add r2, r7, #0
	add r2, r2, #13
	ldrb r3, [r2]
	add r1, r1, r3
	ldrb r2, [r1]
	add r1, r2, #4
	add r2, r1, #0
	mov r3, #24
	add r1, r2, #0
	and r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	add r0, r7, #4
	ldrh r1, [r0]
	add r0, r7, #0
	add r0, r0, #20
	ldrb r2, [r0]
	ldr r0, [r7]
	bl sub_08002E70
	add r0, r7, #0
	add r0, r0, #16
	add r1, r7, #0
	add r1, r1, #13
	ldrb r2, [r1]
	add r0, r0, r2
	ldrb r1, [r0]
	mov r2, #7
	add r0, r1, #0
	and r0, r0, r2
	add r2, r0, #0
	lsl r1, r2, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0804456C
	add r0, r7, #0
	add r0, r0, #16
	add r1, r7, #0
	add r1, r1, #13
	ldrb r2, [r1]
	add r1, r0, r2
	ldrb r0, [r1]
	add r1, r7, #0
	add r1, r1, #20
	ldrb r2, [r1]
	sub r0, r0, r2
	mov r1, #31
	and r0, r0, r1
	cmp r0, #15
	bgt _0804454C
	add r0, r7, #0
	add r0, r0, #20
	ldrb r1, [r0]
	add r0, r1, #0
	add r0, r0, #8
	add r1, r0, #0
	mov r2, #24
	add r0, r1, #0
	and r0, r0, r2
	add r1, r0, #0
	lsl r0, r1, #24
	lsr r2, r0, #24
	ldr r0, [r7]
	mov r1, #128
	bl sub_08002E70
	b _0804456C
_0804454C:
	add r0, r7, #0
	add r0, r0, #20
	ldrb r1, [r0]
	add r0, r1, #0
	sub r0, r0, #8
	add r1, r0, #0
	mov r2, #24
	add r0, r1, #0
	and r0, r0, r2
	add r1, r0, #0
	lsl r0, r1, #24
	lsr r2, r0, #24
	ldr r0, [r7]
	mov r1, #128
	bl sub_08002E70
_0804456C:
	add r1, r7, #0
	add r1, r1, #13
	add r0, r7, #0
	add r0, r0, #13
	add r1, r7, #0
	add r1, r1, #13
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _08044496
_08044582:
	add r0, r7, #0
	add r0, r0, #12
	ldrb r1, [r0]
	add r0, r1, #0
	b _0804458C
_0804458C:
	add sp, sp, #24
	pop {r4,r5,r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08044240

