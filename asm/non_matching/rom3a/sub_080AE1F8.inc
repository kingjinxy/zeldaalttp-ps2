	THUMB_FUNC_START sub_080AE1F8
sub_080AE1F8: @ 0x080AE1F8
	push {r4-r6,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	lsl r2, r2, #24
	lsr r2, r2, #24
	mov r3, sp
	strb r2, [r3]
	ldr r6, _080AE24C  @ =gRam
	ldr r3, _080AE250  @ =0x0000175D
	add r4, r6, r3
	strb r2, [r4]
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	cmp r0, #0
	beq _080AE222
	b _080AE320
_080AE222:
	mov r0, sp
	ldrb r0, [r0]
	mov r1, #11
	bl sub_080C19F8
	ldrb r5, [r4]
	ldr r0, _080AE254  @ =gUnknown_0816E23C
	add r0, r5, r0
	ldrb r0, [r0]
	ldr r2, _080AE258  @ =0x00001732
	add r1, r6, r2
	strb r0, [r1]
	cmp r0, #255
	beq _080AE25C
	ldrb r4, [r1]
	cmp r4, #32
	bne _080AE25E
	bl sub_0812FC84
	b _080AE25E
	.byte 0x00
	.byte 0x00
_080AE24C:
	.4byte gRam
_080AE250:
	.4byte 0x0000175D
_080AE254:
	.4byte gUnknown_0816E23C
_080AE258:
	.4byte 0x00001732
_080AE25C:
	mov r4, #0
_080AE25E:
	add r0, r4, #0
	bl sub_0812FBC4
	ldr r4, _080AE328  @ =gRam
	ldr r3, _080AE32C  @ =0x00001732
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #6
	bne _080AE274
	bl sub_0812F250
_080AE274:
	ldr r0, _080AE330  @ =0x00001791
	add r1, r4, r0
	mov r2, #0
	mov r0, #128
	strb r0, [r1]
	ldr r1, _080AE334  @ =0x00001792
	add r0, r4, r1
	strb r2, [r0]
	ldr r3, _080AE338  @ =0x000016D5
	add r0, r4, r3
	strb r2, [r0]
	sub r1, r1, #190
	add r0, r4, r1
	strb r2, [r0]
	mov r1, sp
	ldr r3, _080AE33C  @ =0x00000A88
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #20
	strb r1, [r0]
	mov r1, sp
	ldr r3, _080AE340  @ =0x00000DED
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #216
	strb r1, [r0]
	mov r1, sp
	add r3, r3, #10
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	strb r2, [r0]
	mov r1, sp
	ldr r3, _080AE344  @ =0x00000A92
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	strb r2, [r0]
	mov r1, sp
	ldr r2, _080AE348  @ =0x00000E33
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #16
	strb r1, [r0]
	mov r1, sp
	ldr r3, _080AE34C  @ =0x00000E29
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	ldr r2, _080AE350  @ =0x0000175D
	add r1, r4, r2
	ldrb r1, [r1]
	strb r1, [r0]
	ldr r0, _080AE354  @ =gUnknown_0816E605
	add r0, r5, r0
	ldrb r0, [r0]
	mov r3, #255
	lsl r3, r3, #8
	add r1, r3, #0
	mov r3, #182
	lsl r3, r3, #5
	add r2, r4, r3
	orr r0, r0, r1
	ldrh r2, [r2]
	add r0, r0, r2
	mov r2, #150
	lsl r2, r2, #4
	add r1, r4, r2
	strh r0, [r1]
	ldr r1, _080AE358  @ =gUnknown_0816E651
	add r1, r5, r1
	add r3, r3, #4
	add r0, r4, r3
	ldrh r0, [r0]
	ldrb r1, [r1]
	add r0, r0, r1
	add r2, r2, #4
	add r1, r4, r2
	strh r0, [r1]
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABA78
_080AE320:
	add sp, sp, #4
	pop {r4-r6}
	pop {r0}
	bx r0
_080AE328:
	.4byte gRam
_080AE32C:
	.4byte 0x00001732
_080AE330:
	.4byte 0x00001791
_080AE334:
	.4byte 0x00001792
_080AE338:
	.4byte 0x000016D5
_080AE33C:
	.4byte 0x00000A88
_080AE340:
	.4byte 0x00000DED
_080AE344:
	.4byte 0x00000A92
_080AE348:
	.4byte 0x00000E33
_080AE34C:
	.4byte 0x00000E29
_080AE350:
	.4byte 0x0000175D
_080AE354:
	.4byte gUnknown_0816E605
_080AE358:
	.4byte gUnknown_0816E651
	THUMB_FUNC_END sub_080AE1F8

