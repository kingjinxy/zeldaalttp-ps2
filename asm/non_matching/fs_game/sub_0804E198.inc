	THUMB_FUNC_START sub_0804E198
sub_0804E198: @ 0x0804E198
	push {r4,r7,lr}
	sub sp, sp, #4
	mov r7, sp
	str r0, [r7]
	ldr r0, [r7]
	ldrb r1, [r0, #23]
	cmp r1, #0
	bne _0804E224
	ldr r0, [r7]
	bl sub_0802C12C
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	bne _0804E210
	ldr r1, [r7]
	add r0, r1, #0
	add r1, r1, #83
	ldrb r0, [r1]
	add r1, r0, #1
	add r0, r1, #0
	lsl r1, r0, #9
	ldr r2, _0804E214  @ =0x06010000
	add r0, r1, r2
	ldr r1, _0804E218  @ =0x03000030
	ldr r2, _0804E21C  @ =gUnknown_03006C80
	ldrb r3, [r2, #1]
	add r2, r3, #0
	lsl r3, r2, #8
	ldr r4, _0804E220  @ =0x00042120
	add r2, r3, r4
	ldr r3, [r1]
	add r1, r2, r3
	mov r2, #128
	lsl r2, r2, #1
	bl 0x080009F4
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
_0804E210:
	b _0804E23E
	.byte 0x00
	.byte 0x00
_0804E214:
	.4byte 0x06010000
_0804E218:
	.4byte 0x03000030
_0804E21C:
	.4byte gUnknown_03006C80
_0804E220:
	.4byte 0x00042120
_0804E224:
	ldr r1, [r7]
	ldr r0, [r7]
	ldr r1, [r7]
	ldrb r2, [r1, #23]
	sub r1, r2, #1
	ldrb r2, [r0, #23]
	mov r3, #0
	and r2, r2, r3
	add r3, r2, #0
	add r2, r3, #0
	orr r2, r2, r1
	add r1, r2, #0
	strb r1, [r0, #23]
_0804E23E:
	add sp, sp, #4
	pop {r4,r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0804E198

	.byte 0x00
	.byte 0x00
