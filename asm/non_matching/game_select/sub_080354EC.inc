	THUMB_FUNC_START sub_080354EC
sub_080354EC: @ 0x080354EC
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	add r4, r0, #0
	ldr r0, [r4, #84]
	ldrb r0, [r0, #10]
	cmp r0, #4
	bls _08035500
	mov r0, #1
	strb r0, [r4, #24]
_08035500:
	ldr r0, [r4, #84]
	ldrb r2, [r0, #10]
	cmp r2, #0
	beq _0803553E
	ldrb r1, [r4, #24]
	cmp r1, #0
	bne _0803553E
	ldrb r0, [r4, #10]
	cmp r0, r2
	beq _08035516
	str r1, [r4, #100]
_08035516:
	ldr r0, [r4, #100]
	cmp r0, #0
	beq _08035520
	sub r0, r0, #1
	b _08035536
_08035520:
	ldr r1, _080355B4  @ =gUnknown_0813DDF0
	ldr r0, [r4, #84]
	ldrb r0, [r0, #10]
	sub r0, r0, #1
	lsl r0, r0, #1
	add r0, r0, r1
	ldrh r0, [r0]
	bl sub_0800D6A4
	mov r0, #225
	lsl r0, r0, #3
_08035536:
	str r0, [r4, #100]
	ldr r0, [r4, #84]
	ldrb r0, [r0, #10]
	strb r0, [r4, #10]
_0803553E:
	mov r6, #0
	ldr r0, _080355B8  @ =gUnknown_03006C80
	ldrb r0, [r0]
	cmp r6, r0
	bcs _080355AA
	ldr r7, _080355BC  @ =gUnknown_03006A30
	ldr r0, _080355C0  @ =0x000002AA
	mov r8, r0
_0803554E:
	lsl r0, r6, #3
	add r0, r0, r6
	lsl r2, r0, #4
	add r0, r7, #0
	add r0, r0, #40
	add r5, r2, r0
	ldr r1, [r5]
	mov r3, #50
	ldrsh r0, [r1, r3]
	cmp r0, r8
	ble _0803559C
	add r0, r1, #0
	add r0, r0, #61
	ldrb r0, [r0]
	cmp r0, #0
	bne _0803559C
	add r4, r2, r7
	ldrh r1, [r4, #54]
	mov r2, #136
	lsl r2, r2, #4
	add r0, r2, #0
	and r0, r0, r1
	cmp r0, #0
	bne _0803559C
	mov r0, #85
	mov r1, #0
	mov r2, #0
	bl sub_0804C8A8
	add r1, r0, #0
	cmp r1, #0
	beq _0803559C
	ldr r0, [r5]
	str r0, [r1, #88]
	mov r0, #128
	lsl r0, r0, #4
	strh r0, [r4, #54]
	mov r0, #13
	strb r0, [r4, #12]
_0803559C:
	add r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r0, _080355B8  @ =gUnknown_03006C80
	ldrb r0, [r0]
	cmp r6, r0
	bcc _0803554E
_080355AA:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080355B4:
	.4byte gUnknown_0813DDF0
_080355B8:
	.4byte gUnknown_03006C80
_080355BC:
	.4byte gUnknown_03006A30
_080355C0:
	.4byte 0x000002AA
	THUMB_FUNC_END sub_080354EC

