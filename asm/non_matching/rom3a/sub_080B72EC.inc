	THUMB_FUNC_START sub_080B72EC
sub_080B72EC: @ 0x080B72EC
	push {r4,lr}
	sub sp, sp, #40
	ldr r0, _080B7370  @ =gUnknown_02006894
	ldrb r0, [r0]
	cmp r0, #0
	bne _080B7300
	ldr r1, _080B7374  @ =gUnknown_020068C0
	ldrb r0, [r1]
	add r0, r0, #1
	strb r0, [r1]
_080B7300:
	ldr r0, _080B7378  @ =gRam
	ldr r1, _080B737C  @ =0x00000996
	add r0, r0, r1
	ldrb r1, [r0]
	mov r0, #1
	and r0, r0, r1
	cmp r0, #0
	beq _080B7324
	ldr r2, _080B7380  @ =gUnknown_02006890
	ldrb r1, [r2]
	ldr r3, _080B7384  @ =gUnknown_02006891
	ldrb r0, [r3]
	lsl r0, r0, #8
	orr r1, r1, r0
	sub r1, r1, #1
	strb r1, [r2]
	lsr r1, r1, #8
	strb r1, [r3]
_080B7324:
	ldr r0, _080B7388  @ =gUnknown_0816FE52
	str r0, [sp, #20]
	ldr r0, _080B738C  @ =gUnknown_0816FE58
	str r0, [sp, #24]
	ldr r0, _080B7390  @ =gUnknown_0816FE5E
	str r0, [sp, #28]
	ldr r0, _080B7394  @ =gUnknown_0816FE7C
	str r0, [sp, #32]
	ldr r0, _080B7398  @ =gUnknown_0816FE8E
	str r0, [sp, #36]
	add r1, sp, #12
	mov r0, #100
	strh r0, [r1]
	add r2, r1, #0
	ldr r1, _080B739C  @ =gUnknown_0200688B
	ldr r3, _080B73A0  @ =0x0000FFD0
	add r0, r3, #0
	ldrb r1, [r1]
	add r0, r0, r1
	strh r0, [r2, #2]
	add r1, r2, #0
	mov r0, #5
	strb r0, [r1, #4]
	mov r1, sp
	add r0, sp, #28
	ldm r0!, {r2-r4}
	stm r1!, {r2-r4}
	ldr r0, [sp, #12]
	ldr r1, [sp, #16]
	ldr r2, [sp, #20]
	ldr r3, [sp, #24]
	bl sub_080B7B40
	add sp, sp, #40
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080B7370:
	.4byte gUnknown_02006894
_080B7374:
	.4byte gUnknown_020068C0
_080B7378:
	.4byte gRam
_080B737C:
	.4byte 0x00000996
_080B7380:
	.4byte gUnknown_02006890
_080B7384:
	.4byte gUnknown_02006891
_080B7388:
	.4byte gUnknown_0816FE52
_080B738C:
	.4byte gUnknown_0816FE58
_080B7390:
	.4byte gUnknown_0816FE5E
_080B7394:
	.4byte gUnknown_0816FE7C
_080B7398:
	.4byte gUnknown_0816FE8E
_080B739C:
	.4byte gUnknown_0200688B
_080B73A0:
	.4byte 0x0000FFD0
	THUMB_FUNC_END sub_080B72EC

