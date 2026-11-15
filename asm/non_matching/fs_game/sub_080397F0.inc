	THUMB_FUNC_START sub_080397F0
sub_080397F0: @ 0x080397F0
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	add r0, r7, #2
	add r1, r7, #3
	add r2, r7, #4
	mov r3, #0
	strb r3, [r2]
	mov r2, #0
	strb r2, [r1]
	mov r1, #0
	strb r1, [r0]
	add r0, r7, #0
	mov r1, #0
	strb r1, [r0]
_0803980E:
	add r0, r7, #0
	ldr r1, _0803981C  @ =gUnknown_03006C80
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bcc _08039820
	b _080398B0
_0803981C:
	.4byte gUnknown_03006C80
_08039820:
	add r0, r7, #1
	ldr r1, _080398AC  @ =gUnknown_03006C80
	add r2, r7, #0
	ldrb r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #3
	add r2, r1, r3
	add r1, r2, #0
	add r2, r2, #45
	ldrb r1, [r2]
	strb r1, [r0]
	add r0, r7, #1
	ldrb r1, [r0]
	add r0, r1, #0
	mov r1, #1
	bl sub_08039744
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #7
	bne _08039858
	add r1, r7, #2
	add r0, r7, #2
	add r1, r7, #2
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
_08039858:
	add r0, r7, #1
	ldrb r1, [r0]
	add r0, r1, #0
	mov r1, #2
	bl sub_08039744
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #7
	bne _0803987A
	add r1, r7, #3
	add r0, r7, #3
	add r1, r7, #3
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
_0803987A:
	add r0, r7, #1
	ldrb r1, [r0]
	add r0, r1, #0
	mov r1, #3
	bl sub_08039744
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #7
	bne _0803989C
	add r1, r7, #4
	add r0, r7, #4
	add r1, r7, #4
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
_0803989C:
	add r1, r7, #0
	add r0, r7, #0
	add r1, r7, #0
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _0803980E
_080398AC:
	.4byte gUnknown_03006C80
_080398B0:
	add r0, r7, #4
	ldr r1, _080398C0  @ =gUnknown_03006C80
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _080398C4
	mov r0, #3
	b _080398F0
_080398C0:
	.4byte gUnknown_03006C80
_080398C4:
	add r0, r7, #3
	ldr r1, _080398D4  @ =gUnknown_03006C80
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _080398D8
	mov r0, #2
	b _080398F0
_080398D4:
	.4byte gUnknown_03006C80
_080398D8:
	add r0, r7, #2
	ldr r1, _080398E8  @ =gUnknown_03006C80
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _080398EC
	mov r0, #1
	b _080398F0
_080398E8:
	.4byte gUnknown_03006C80
_080398EC:
	mov r0, #0
	b _080398F0
_080398F0:
	add sp, sp, #8
	pop {r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080397F0

