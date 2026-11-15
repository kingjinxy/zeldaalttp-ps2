	THUMB_FUNC_START sub_0803D9F4
sub_0803D9F4: @ 0x0803D9F4
	push {r4,r7,lr}
	sub sp, sp, #24
	mov r7, sp
	str r0, [r7]
	str r1, [r7, #4]
	str r2, [r7, #8]
	add r0, r7, #0
	add r0, r0, #21
	mov r1, #255
	strb r1, [r0]
	add r0, r7, #0
	add r0, r0, #16
	ldr r2, _0803DA2C  @ =0x0000FFFF
	add r1, r2, #0
	strh r1, [r0]
	add r0, r7, #0
	add r0, r0, #20
	mov r1, #0
	strb r1, [r0]
_0803DA1A:
	add r0, r7, #0
	add r0, r0, #20
	ldr r1, _0803DA30  @ =gUnknown_03006C80
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bcc _0803DA34
	b _0803DB38
	.byte 0x00
	.byte 0x00
_0803DA2C:
	.4byte 0x0000FFFF
_0803DA30:
	.4byte gUnknown_03006C80
_0803DA34:
	ldr r0, _0803DB34  @ =gUnknown_03006A30
	add r2, r7, #0
	add r2, r2, #20
	ldrb r1, [r2]
	add r3, r1, #0
	lsl r2, r3, #3
	add r2, r2, r1
	lsl r1, r2, #4
	add r0, r0, #40
	add r2, r0, r1
	ldr r1, [r2]
	ldr r2, [r7, #4]
	ldr r3, [r7, #8]
	ldr r0, [r7]
	bl 0x0800390C
	lsl r1, r0, #24
	lsr r0, r1, #24
	cmp r0, #0
	beq _0803DB1E
	add r0, r7, #0
	add r0, r0, #12
	ldr r1, _0803DB34  @ =gUnknown_03006A30
	add r3, r7, #0
	add r3, r3, #20
	ldrb r2, [r3]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, #40
	add r2, r1, r2
	ldr r1, [r2]
	ldr r2, [r7]
	ldrh r1, [r1, #50]
	ldrh r2, [r2, #50]
	sub r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	add r0, r7, #0
	add r0, r0, #12
	mov r2, #0
	ldrsh r1, [r0, r2]
	cmp r1, #0
	bge _0803DA8E
_0803DA8E:
	add r0, r7, #0
	add r0, r0, #12
	add r1, r7, #0
	add r1, r1, #12
	ldrh r2, [r1]
	neg r1, r2
	add r2, r1, #0
	strh r2, [r0]
	add r0, r7, #0
	add r0, r0, #14
	ldr r1, _0803DB34  @ =gUnknown_03006A30
	add r3, r7, #0
	add r3, r3, #20
	ldrb r2, [r3]
	add r4, r2, #0
	lsl r3, r4, #3
	add r3, r3, r2
	lsl r2, r3, #4
	add r1, r1, #40
	add r2, r1, r2
	ldr r1, [r2]
	ldr r2, [r7]
	ldrh r1, [r1, #54]
	ldrh r2, [r2, #54]
	sub r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	add r0, r7, #0
	add r0, r0, #14
	mov r2, #0
	ldrsh r1, [r0, r2]
	cmp r1, #0
	bge _0803DAD0
_0803DAD0:
	add r0, r7, #0
	add r0, r0, #14
	add r1, r7, #0
	add r1, r1, #14
	ldrh r2, [r1]
	neg r1, r2
	add r2, r1, #0
	strh r2, [r0]
	add r0, r7, #0
	add r0, r0, #18
	add r1, r7, #0
	add r1, r1, #12
	add r2, r7, #0
	add r2, r2, #14
	ldrh r1, [r1]
	ldrh r2, [r2]
	add r1, r1, r2
	add r2, r1, #0
	strh r2, [r0]
	add r0, r7, #0
	add r0, r0, #16
	add r1, r7, #0
	add r1, r1, #18
	ldrh r0, [r0]
	ldrh r1, [r1]
	cmp r0, r1
	bls _0803DB1E
	add r0, r7, #0
	add r0, r0, #16
	add r1, r7, #0
	add r1, r1, #18
	ldrh r2, [r1]
	strh r2, [r0]
	add r0, r7, #0
	add r0, r0, #21
	add r1, r7, #0
	add r1, r1, #20
	ldrb r2, [r1]
	strb r2, [r0]
_0803DB1E:
	add r1, r7, #0
	add r1, r1, #20
	add r0, r7, #0
	add r0, r0, #20
	add r1, r7, #0
	add r1, r1, #20
	ldrb r2, [r1]
	add r1, r2, #1
	add r2, r1, #0
	strb r2, [r0]
	b _0803DA1A
_0803DB34:
	.4byte gUnknown_03006A30
_0803DB38:
	add r0, r7, #0
	add r0, r0, #21
	ldrb r1, [r0]
	add r0, r1, #0
	b _0803DB42
_0803DB42:
	add sp, sp, #24
	pop {r4,r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_0803D9F4

	.byte 0x00
	.byte 0x00
