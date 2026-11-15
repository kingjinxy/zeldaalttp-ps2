	THUMB_FUNC_START sub_08109FE4
sub_08109FE4: @ 0x08109FE4
	push {r4-r7,lr}
	lsl r0, r0, #24
	lsr r7, r0, #24
	ldr r1, _0810A088  @ =gRam
	ldr r2, _0810A08C  @ =0x000010A2
	add r0, r1, r2
	add r0, r7, r0
	ldrb r0, [r0]
	add r6, r1, #0
	cmp r0, #0
	beq _0810A080
	mov r3, #6
	cmp r0, #9
	beq _0810A012
	mov r3, #8
	cmp r0, #8
	bhi _0810A012
	ldr r1, _0810A090  @ =0x00000FB2
	add r0, r6, r1
	add r0, r7, r0
	ldrb r0, [r0]
	lsl r0, r0, #25
	lsr r3, r0, #24
_0810A012:
	ldr r2, _0810A094  @ =0x00001622
	add r4, r6, r2
	ldrb r0, [r4]
	ldr r1, _0810A098  @ =0x00001623
	add r5, r6, r1
	ldrb r2, [r5]
	lsl r2, r2, #8
	ldr r1, _0810A09C  @ =gUnknown_0817C860
	add r1, r3, r1
	orr r0, r0, r2
	ldrh r1, [r1]
	add r0, r0, r1
	strb r0, [r4]
	lsr r0, r0, #8
	strb r0, [r5]
	ldr r2, _0810A0A0  @ =0x00001624
	add r4, r6, r2
	ldrb r0, [r4]
	ldr r1, _0810A0A4  @ =0x00001625
	add r5, r6, r1
	ldrb r1, [r5]
	lsl r1, r1, #8
	ldr r2, _0810A0A8  @ =gUnknown_0817C86A
	add r3, r3, r2
	orr r0, r0, r1
	ldrh r3, [r3]
	add r0, r0, r3
	strb r0, [r4]
	lsr r0, r0, #8
	strb r0, [r5]
	ldr r2, _0810A0AC  @ =0x00000D94
	add r4, r6, r2
	add r4, r7, r4
	ldrb r5, [r4]
	mov r0, #240
	and r0, r0, r5
	strb r0, [r4]
	ldr r1, _0810A08C  @ =0x000010A2
	add r0, r6, r1
	add r0, r7, r0
	ldrb r0, [r0]
	sub r0, r0, #1
	lsl r1, r0, #2
	add r1, r1, r0
	lsl r1, r1, #3
	ldr r0, _0810A0B0  @ =gUnknown_0817C6D0
	add r1, r1, r0
	add r0, r7, #0
	mov r2, #5
	bl sub_080C9480
	strb r5, [r4]
	add r0, r7, #0
	bl sub_080C1F70
_0810A080:
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810A088:
	.4byte gRam
_0810A08C:
	.4byte 0x000010A2
_0810A090:
	.4byte 0x00000FB2
_0810A094:
	.4byte 0x00001622
_0810A098:
	.4byte 0x00001623
_0810A09C:
	.4byte gUnknown_0817C860
_0810A0A0:
	.4byte 0x00001624
_0810A0A4:
	.4byte 0x00001625
_0810A0A8:
	.4byte gUnknown_0817C86A
_0810A0AC:
	.4byte 0x00000D94
_0810A0B0:
	.4byte gUnknown_0817C6D0
	THUMB_FUNC_END sub_08109FE4

