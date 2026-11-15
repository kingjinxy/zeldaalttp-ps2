	THUMB_FUNC_START sub_080398F8
sub_080398F8: @ 0x080398F8
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	add r1, r7, #0
	strb r0, [r1]
	add r0, r7, #3
	ldr r1, _08039944  @ =gUnknown_08427C0C
	ldr r2, _08039948  @ =gUnknown_03006C80
	ldrb r3, [r2, #1]
	add r2, r3, #0
	lsl r3, r2, #1
	add r1, r1, r3
	ldrb r2, [r1]
	strb r2, [r0]
	add r0, r7, #0
	add r2, r7, #0
	ldrb r1, [r2]
	ldr r2, _08039944  @ =gUnknown_08427C0C
	ldr r3, _08039948  @ =gUnknown_03006C80
	ldrb r4, [r3, #1]
	add r3, r4, #0
	lsl r4, r3, #1
	add r3, r4, #1
	add r2, r2, r3
	ldrb r3, [r2]
	lsl r1, r1, r3
	add r2, r1, #0
	strb r2, [r0]
	add r0, r7, #1
	mov r1, #0
	strb r1, [r0]
_08039936:
	add r0, r7, #1
	ldr r1, _08039948  @ =gUnknown_03006C80
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bcc _0803994C
	b _080399C4
_08039944:
	.4byte gUnknown_08427C0C
_08039948:
	.4byte gUnknown_03006C80
_0803994C:
	add r0, r7, #2
	ldr r1, _080399C0  @ =gUnknown_03006C80
	add r2, r7, #1
	ldrb r3, [r2]
	add r2, r3, #0
	lsl r3, r2, #3
	add r2, r1, r3
	add r1, r2, #0
	add r2, r2, #45
	ldrb r1, [r2]
	strb r1, [r0]
	add r0, r7, #2
	add r1, r7, #3
	ldrb r0, [r0]
	ldrb r1, [r1]
	add r2, r1, #0
	add r1, r0, #0
	and r1, r1, r2
	add r0, r7, #0
	lsl r2, r1, #24
	lsr r1, r2, #24
	ldrb r0, [r0]
	cmp r1, r0
	bcs _080399B0
	ldr r0, _080399C0  @ =gUnknown_03006C80
	add r1, r7, #1
	ldrb r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #3
	add r0, r0, r2
	add r1, r7, #2
	add r2, r7, #3
	ldrb r3, [r2]
	mvn r2, r3
	ldrb r1, [r1]
	add r3, r2, #0
	and r1, r1, r3
	add r2, r7, #0
	ldrb r2, [r2]
	orr r1, r1, r2
	add r2, r0, #0
	add r0, r0, #45
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_080399B0:
	add r1, r7, #1
	add r0, r7, #1
	add r1, r7, #1
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _08039936
_080399C0:
	.4byte gUnknown_03006C80
_080399C4:
	add sp, sp, #4
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_080398F8

