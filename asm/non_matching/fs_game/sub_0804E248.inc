	THUMB_FUNC_START sub_0804E248
sub_0804E248: @ 0x0804E248
	push {r7,lr}
	sub sp, sp, #8
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	bl GetNextFrame
	ldr r1, _0804E280  @ =gUnknown_03006C80
	add r0, r1, #0
	add r1, r1, #110
	ldrb r0, [r1]
	cmp r0, #1
	bls _0804E284
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
	b _0804E35C
	.byte 0x00
	.byte 0x00
_0804E280:
	.4byte gUnknown_03006C80
_0804E284:
	ldr r0, [r7]
	bl sub_08000580
	add r1, r7, #4
	strb r0, [r1]
	add r0, r7, #4
	ldrb r1, [r0]
	add r0, r1, #0
	bl sub_08000A40
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #1
	bne _0804E33C
	ldr r0, [r7]
	ldr r2, _0804E338  @ =gUnknown_03006C80
	add r1, r2, #0
	add r2, r2, #79
	ldrb r0, [r0, #11]
	ldrb r1, [r2]
	cmp r0, r1
	beq _0804E2DA
	ldr r0, _0804E338  @ =gUnknown_03006C80
	add r1, r0, #0
	add r0, r0, #111
	ldrb r1, [r0]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0]
	ldr r0, _0804E338  @ =gUnknown_03006C80
	ldr r1, [r7]
	add r2, r0, #0
	add r0, r0, #79
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	ldrb r1, [r1, #11]
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
_0804E2DA:
	ldr r0, _0804E338  @ =gUnknown_03006C80
	ldr r2, _0804E338  @ =gUnknown_03006C80
	add r1, r2, #0
	add r2, r2, #111
	add r1, r7, #4
	ldrb r2, [r2]
	ldrb r3, [r1]
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r0, #0
	add r0, r0, #111
	ldrb r2, [r0]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0]
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	cmp r1, #0
	bne _0804E322
	mov r0, #24
	bl sub_08003DFC
	ldr r0, [r7]
	ldrb r1, [r0, #30]
	mov r2, #240
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #30]
_0804E322:
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	mov r3, #1
	add r1, r2, #0
	orr r1, r1, r3
	add r2, r1, #0
	strb r2, [r0, #24]
	b _0804E35C
_0804E338:
	.4byte gUnknown_03006C80
_0804E33C:
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	cmp r1, #1
	bne _0804E350
	ldr r0, [r7]
	ldrb r1, [r0, #30]
	mov r2, #240
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #30]
_0804E350:
	ldr r0, [r7]
	ldrb r1, [r0, #24]
	mov r2, #0
	and r1, r1, r2
	add r2, r1, #0
	strb r2, [r0, #24]
_0804E35C:
	add sp, sp, #8
	pop {r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804E248

