	THUMB_FUNC_START sub_0803D520
sub_0803D520: @ 0x0803D520
	push {r7,lr}
	sub sp, sp, #16
	mov r7, sp
	add r3, r0, #0
	add r0, r2, #0
	add r2, r7, #0
	strb r3, [r2]
	add r2, r7, #2
	strh r1, [r2]
	add r1, r7, #4
	strb r0, [r1]
	ldr r0, _0803D554  @ =gUnknown_03006C80
	add r1, r7, #0
	ldrb r2, [r1]
	add r1, r2, #0
	lsl r2, r1, #2
	add r1, r0, #0
	add r1, r1, #12
	add r0, r1, r2
	add r1, r7, #2
	ldrh r2, [r1]
	ldr r1, [r0]
	sub r0, r1, r2
	cmp r0, #0
	bge _0803D558
	b _0803D654
_0803D554:
	.4byte gUnknown_03006C80
_0803D558:
	add r1, r7, #2
	ldrh r0, [r1]
	cmp r0, #20
	beq _0803D596
	cmp r0, #20
	bgt _0803D56E
	cmp r0, #1
	beq _0803D582
	cmp r0, #5
	beq _0803D58C
	b _0803D5BE
_0803D56E:
	cmp r0, #100
	beq _0803D5AA
	cmp r0, #100
	bgt _0803D57C
	cmp r0, #50
	beq _0803D5A0
	b _0803D5BE
_0803D57C:
	cmp r0, #200
	beq _0803D5B4
	b _0803D5BE
_0803D582:
	add r0, r7, #0
	add r0, r0, #12
	mov r1, #1
	strb r1, [r0]
	b _0803D5C0
_0803D58C:
	add r0, r7, #0
	add r0, r0, #12
	mov r1, #2
	strb r1, [r0]
	b _0803D5C0
_0803D596:
	add r0, r7, #0
	add r0, r0, #12
	mov r1, #3
	strb r1, [r0]
	b _0803D5C0
_0803D5A0:
	add r0, r7, #0
	add r0, r0, #12
	mov r1, #6
	strb r1, [r0]
	b _0803D5C0
_0803D5AA:
	add r0, r7, #0
	add r0, r0, #12
	mov r1, #8
	strb r1, [r0]
	b _0803D5C0
_0803D5B4:
	add r0, r7, #0
	add r0, r0, #12
	mov r1, #9
	strb r1, [r0]
	b _0803D5C0
_0803D5BE:
	b _0803D654
_0803D5C0:
	add r0, r7, #0
	add r0, r0, #12
	ldrb r1, [r0]
	mov r0, #0
	mov r2, #1
	bl sub_0804C8A8
	str r0, [r7, #8]
	ldr r0, [r7, #8]
	cmp r0, #0
	beq _0803D64E
	ldr r0, _0803D650  @ =gUnknown_03006A30
	add r2, r7, #0
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	ldr r1, [r7, #8]
	bl sub_0803D3D0
	ldr r0, [r7, #8]
	add r1, r7, #4
	ldrb r2, [r1]
	mov r3, #128
	add r1, r2, #0
	orr r1, r1, r3
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
	ldr r0, [r7, #8]
	mov r1, #128
	lsl r1, r1, #10
	str r1, [r0, #16]
	ldr r0, [r7, #8]
	ldr r1, [r7, #8]
	ldrh r2, [r1, #58]
	sub r1, r2, #4
	ldrh r2, [r0, #58]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strh r1, [r0, #58]
	ldr r0, _0803D650  @ =gUnknown_03006A30
	add r2, r7, #0
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r1, r0, r1
	ldr r0, [r1]
	add r1, r7, #2
	ldrh r2, [r1]
	neg r1, r2
	bl sub_0802C53C
_0803D64E:
	b _0803D654
_0803D650:
	.4byte gUnknown_03006A30
_0803D654:
	add sp, sp, #16
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0803D520

