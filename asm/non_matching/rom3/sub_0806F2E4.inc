	THUMB_FUNC_START sub_0806F2E4
sub_0806F2E4: @ 0x0806F2E4
	push {r4,lr}
	ldr r3, _0806F320  @ =gRam
	ldr r1, _0806F324  @ =0x00000AB4
	add r0, r3, r1
	ldrb r1, [r0]
	ldr r2, _0806F328  @ =0x000009E4
	add r0, r3, r2
	ldrb r0, [r0]
	orr r1, r1, r0
	ldr r4, _0806F32C  @ =0x000009E3
	add r0, r3, r4
	ldrb r2, [r0]
	orr r1, r1, r2
	sub r4, r4, #1
	add r0, r3, r4
	mov r4, #0
	strb r1, [r0]
	mov r1, #158
	lsl r1, r1, #4
	add r0, r3, r1
	strb r4, [r0]
	lsl r2, r2, #24
	cmp r2, #0
	bne _0806F330
	mov r2, #150
	lsl r2, r2, #4
	add r1, r3, r2
	mov r0, #1
	b _0806F338
	.byte 0x00
	.byte 0x00
_0806F320:
	.4byte gRam
_0806F324:
	.4byte 0x00000AB4
_0806F328:
	.4byte 0x000009E4
_0806F32C:
	.4byte 0x000009E3
_0806F330:
	mov r4, #150
	lsl r4, r4, #4
	add r1, r3, r4
	mov r0, #2
_0806F338:
	strh r0, [r1]
	ldr r1, _0806F368  @ =0x00000AF8
	add r0, r3, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _0806F374
	ldr r1, _0806F36C  @ =gUnknown_0814CDDC
	ldr r2, _0806F370  @ =0x000009E2
	add r0, r3, r2
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	mov r4, #150
	lsl r4, r4, #4
	add r1, r3, r4
	mov r2, #0
	ldrsh r1, [r1, r2]
	and r0, r0, r1
	cmp r0, #0
	bne _0806F37E
	add r4, r4, #128
	add r1, r3, r4
	b _0806F37A
	.byte 0x00
	.byte 0x00
_0806F368:
	.4byte 0x00000AF8
_0806F36C:
	.4byte gUnknown_0814CDDC
_0806F370:
	.4byte 0x000009E2
_0806F374:
	mov r0, #158
	lsl r0, r0, #4
	add r1, r3, r0
_0806F37A:
	mov r0, #2
	strb r0, [r1]
_0806F37E:
	ldr r2, _0806F39C  @ =0x000009E1
	add r1, r3, r2
	mov r0, #0
	strb r0, [r1]
	ldr r4, _0806F3A0  @ =0x000009E4
	add r0, r3, r4
	ldrb r0, [r0]
	cmp r0, #0
	bne _0806F3A4
	mov r0, #150
	lsl r0, r0, #4
	add r1, r3, r0
	mov r0, #4
	b _0806F3AC
	.byte 0x00
	.byte 0x00
_0806F39C:
	.4byte 0x000009E1
_0806F3A0:
	.4byte 0x000009E4
_0806F3A4:
	mov r2, #150
	lsl r2, r2, #4
	add r1, r3, r2
	mov r0, #8
_0806F3AC:
	strh r0, [r1]
	ldr r4, _0806F3DC  @ =0x00000AF9
	add r0, r3, r4
	ldrb r0, [r0]
	cmp r0, #0
	bne _0806F3E8
	ldr r1, _0806F3E0  @ =gUnknown_0814CDDC
	ldr r2, _0806F3E4  @ =0x000009E2
	add r0, r3, r2
	ldrb r0, [r0]
	add r0, r0, r1
	ldrb r0, [r0]
	mov r4, #150
	lsl r4, r4, #4
	add r1, r3, r4
	mov r2, #0
	ldrsh r1, [r1, r2]
	and r0, r0, r1
	cmp r0, #0
	bne _0806F3F0
	add r4, r4, #129
	add r1, r3, r4
	b _0806F3EC
	.byte 0x00
	.byte 0x00
_0806F3DC:
	.4byte 0x00000AF9
_0806F3E0:
	.4byte gUnknown_0814CDDC
_0806F3E4:
	.4byte 0x000009E2
_0806F3E8:
	ldr r0, _0806F41C  @ =0x000009E1
	add r1, r3, r0
_0806F3EC:
	mov r0, #2
	strb r0, [r1]
_0806F3F0:
	add r2, r3, #0
	ldr r1, _0806F420  @ =0x00000A14
	add r0, r2, r1
	ldrb r1, [r0]
	cmp r1, #0
	beq _0806F404
	mov r4, #158
	lsl r4, r4, #4
	add r0, r2, r4
	strb r1, [r0]
_0806F404:
	ldr r1, _0806F424  @ =0x00000A15
	add r0, r3, r1
	ldrb r1, [r0]
	cmp r1, #0
	beq _0806F414
	ldr r2, _0806F41C  @ =0x000009E1
	add r0, r3, r2
	strb r1, [r0]
_0806F414:
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806F41C:
	.4byte 0x000009E1
_0806F420:
	.4byte 0x00000A14
_0806F424:
	.4byte 0x00000A15
	THUMB_FUNC_END sub_0806F2E4

