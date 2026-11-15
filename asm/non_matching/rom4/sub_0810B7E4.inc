	THUMB_FUNC_START sub_0810B7E4
sub_0810B7E4: @ 0x0810B7E4
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	add r0, r4, #0
	bl sub_0810BDDC
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #0
	bne _0810B89C
	add r0, r4, #0
	bl sub_080CA58C
	ldr r1, _0810B8A4  @ =gRam
	ldr r0, _0810B8A8  @ =0x00000A2A
	add r6, r1, r0
	strh r5, [r6]
	ldr r2, _0810B8AC  @ =0x000010B2
	add r0, r1, r2
	add r3, r4, r0
	ldrb r0, [r3]
	cmp r0, #0
	beq _0810B834
	cmp r0, #1
	bne _0810B824
	ldr r5, _0810B8B0  @ =0x00000A3E
	add r1, r1, r5
	mov r0, #255
	strb r0, [r1]
_0810B824:
	ldr r2, _0810B8B4  @ =gUnknown_0817CBB4
	ldrb r1, [r3]
	mov r0, #1
	and r0, r0, r1
	lsl r0, r0, #1
	add r0, r0, r2
	ldrh r0, [r0]
	strh r0, [r6]
_0810B834:
	ldr r0, _0810B8A4  @ =gRam
	ldr r2, _0810B8B8  @ =0x00000FC2
	add r1, r0, r2
	add r1, r4, r1
	ldrb r1, [r1]
	add r3, r0, #0
	cmp r1, #0
	bne _0810B886
	ldr r5, _0810B8BC  @ =0x00000F92
	add r0, r3, r5
	add r0, r4, r0
	ldrb r1, [r0]
	add r1, r1, #1
	mov r2, #3
	and r1, r1, r2
	strb r1, [r0]
	cmp r1, #0
	bne _0810B86C
	ldr r1, _0810B8C0  @ =0x00000F52
	add r0, r3, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #1
	bhi _0810B86C
	add r0, r4, #0
	mov r1, #105
	bl sub_080CF0AC
_0810B86C:
	ldr r2, _0810B8A4  @ =gRam
	ldr r5, _0810B8B8  @ =0x00000FC2
	add r1, r2, r5
	add r1, r4, r1
	ldr r3, _0810B8C4  @ =gUnknown_0817CBB8
	sub r5, r5, #16
	add r0, r2, r5
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r1]
	add r3, r2, #0
_0810B886:
	ldr r1, _0810B8C8  @ =gUnknown_0817CBC0
	ldr r2, _0810B8C0  @ =0x00000F52
	add r0, r3, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_0810B89C:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0810B8A4:
	.4byte gRam
_0810B8A8:
	.4byte 0x00000A2A
_0810B8AC:
	.4byte 0x000010B2
_0810B8B0:
	.4byte 0x00000A3E
_0810B8B4:
	.4byte gUnknown_0817CBB4
_0810B8B8:
	.4byte 0x00000FC2
_0810B8BC:
	.4byte 0x00000F92
_0810B8C0:
	.4byte 0x00000F52
_0810B8C4:
	.4byte gUnknown_0817CBB8
_0810B8C8:
	.4byte gUnknown_0817CBC0
	THUMB_FUNC_END sub_0810B7E4

