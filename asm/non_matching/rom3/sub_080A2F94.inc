	THUMB_FUNC_START sub_080A2F94
sub_080A2F94: @ 0x080A2F94
	push {r4,r5,lr}
	ldr r2, _080A2FA8  @ =gRam
	ldr r1, _080A2FAC  @ =0x0000180C
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #8
	and r0, r0, r1
	cmp r0, #0
	beq _080A2FB4
	b _080A2FD0
_080A2FA8:
	.4byte gRam
_080A2FAC:
	.4byte 0x0000180C
_080A2FB0:
	mov r0, #1
	b _080A2FD2
_080A2FB4:
	mov r1, #4
	ldr r0, _080A3000  @ =0x00000E15
	add r3, r2, r0
_080A2FBA:
	lsl r0, r1, #24
	asr r1, r0, #24
	add r0, r1, r3
	ldrb r0, [r0]
	cmp r0, #49
	beq _080A2FB0
	sub r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _080A2FBA
_080A2FD0:
	mov r0, #0
_080A2FD2:
	cmp r0, #0
	beq _080A2FD8
	b _080A30E8
_080A2FD8:
	ldr r1, _080A3004  @ =0x000016E8
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #64
	and r0, r0, r1
	cmp r0, #0
	bne _080A3070
	ldr r3, _080A3008  @ =0x0000172C
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _080A30E8
	ldr r1, _080A300C  @ =0x000016F8
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	beq _080A3010
	mov r0, #0
	b _080A3014
	.byte 0x00
	.byte 0x00
_080A3000:
	.4byte 0x00000E15
_080A3004:
	.4byte 0x000016E8
_080A3008:
	.4byte 0x0000172C
_080A300C:
	.4byte 0x000016F8
_080A3010:
	bl sub_080A1ADC
_080A3014:
	lsl r0, r0, #24
	cmp r0, #0
	beq _080A30E8
	mov r0, #8
	bl sub_080A3B64
	lsl r0, r0, #24
	cmp r0, #0
	beq _080A30BA
	mov r0, #0
	mov r1, #48
	bl sub_080ADF34
	mov r0, #17
	mov r1, #1
	bl sub_080BEA28
	ldr r1, _080A30F0  @ =gRam
	ldr r2, _080A30F4  @ =0x00001739
	add r0, r1, r2
	mov r4, #0
	strb r4, [r0]
	ldr r0, _080A30F8  @ =gUnknown_081690EF
	ldrb r2, [r0]
	ldr r3, _080A30FC  @ =0x000016EB
	add r0, r1, r3
	strb r2, [r0]
	ldr r2, _080A3100  @ =0x00001796
	add r0, r1, r2
	strb r4, [r0]
	add r3, r3, #158
	add r0, r1, r3
	strb r4, [r0]
	ldr r0, _080A3104  @ =0x0000180C
	add r2, r1, r0
	mov r0, #8
	strb r0, [r2]
	ldr r2, _080A3108  @ =0x00001705
	add r3, r1, r2
	ldrb r2, [r3]
	mov r0, #1
	orr r0, r0, r2
	strb r0, [r3]
	ldr r3, _080A310C  @ =0x000016D4
	add r1, r1, r3
	strb r4, [r1]
_080A3070:
	bl sub_080A38AC
	ldr r3, _080A30F0  @ =gRam
	ldr r0, _080A3110  @ =0x00001727
	add r2, r3, r0
	ldrb r1, [r2]
	mov r0, #240
	and r0, r0, r1
	strb r0, [r2]
	ldr r1, _080A30FC  @ =0x000016EB
	add r5, r3, r1
	ldrb r0, [r5]
	sub r0, r0, #1
	strb r0, [r5]
	lsl r0, r0, #24
	cmp r0, #0
	bge _080A30E8
	ldr r2, _080A3114  @ =0x00001789
	add r4, r3, r2
	ldrb r1, [r4]
	add r1, r1, #1
	strb r1, [r4]
	ldr r2, _080A30F8  @ =gUnknown_081690EF
	ldrb r0, [r4]
	add r0, r0, r2
	ldrb r0, [r0]
	strb r0, [r5]
	lsl r1, r1, #24
	lsr r1, r1, #24
	cmp r1, #1
	bne _080A30B4
	mov r0, #93
	bl sub_0809E49C
_080A30B4:
	ldrb r0, [r4]
	cmp r0, #3
	bne _080A30E8
_080A30BA:
	ldr r1, _080A30F0  @ =gRam
	ldr r3, _080A3100  @ =0x00001796
	add r0, r1, r3
	mov r3, #0
	strb r3, [r0]
	ldr r2, _080A3114  @ =0x00001789
	add r0, r1, r2
	strb r3, [r0]
	ldr r0, _080A3118  @ =0x000016E8
	add r4, r1, r0
	ldrb r2, [r4]
	mov r0, #128
	and r0, r0, r2
	strb r0, [r4]
	ldr r2, _080A3104  @ =0x0000180C
	add r0, r1, r2
	strb r3, [r0]
	ldr r3, _080A3108  @ =0x00001705
	add r1, r1, r3
	ldrb r2, [r1]
	mov r0, #254
	and r0, r0, r2
	strb r0, [r1]
_080A30E8:
	pop {r4,r5}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080A30F0:
	.4byte gRam
_080A30F4:
	.4byte 0x00001739
_080A30F8:
	.4byte gUnknown_081690EF
_080A30FC:
	.4byte 0x000016EB
_080A3100:
	.4byte 0x00001796
_080A3104:
	.4byte 0x0000180C
_080A3108:
	.4byte 0x00001705
_080A310C:
	.4byte 0x000016D4
_080A3110:
	.4byte 0x00001727
_080A3114:
	.4byte 0x00001789
_080A3118:
	.4byte 0x000016E8
	THUMB_FUNC_END sub_080A2F94

