	THUMB_FUNC_START sub_08101BC0
sub_08101BC0: @ 0x08101BC0
	push {r4-r6,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r5, _08101C90  @ =gRam
	ldr r0, _08101C94  @ =0x00000F92
	add r2, r5, r0
	add r2, r4, r2
	ldr r6, _08101C98  @ =0x00000F62
	add r1, r5, r6
	add r1, r4, r1
	ldr r3, _08101C9C  @ =gUnknown_0817B470
	add r6, r6, #80
	add r0, r5, r6
	add r0, r4, r0
	ldrb r0, [r0]
	add r0, r0, r3
	ldrb r0, [r0]
	ldrb r1, [r1]
	add r0, r0, r1
	mov r6, #0
	strb r0, [r2]
	add r0, r4, #0
	bl sub_08101EE8
	ldr r1, _08101CA0  @ =0x00001072
	add r0, r5, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #0
	bne _08101C0C
	ldr r2, _08101CA4  @ =0x00001042
	add r0, r5, r2
	add r0, r4, r0
	ldrb r1, [r0]
	mov r0, #15
	and r0, r0, r1
	cmp r0, #0
	beq _08101C24
_08101C0C:
	ldr r1, _08101CA8  @ =0x00000F52
	add r0, r5, r1
	add r0, r4, r0
	strb r6, [r0]
	ldr r2, _08101CAC  @ =0x00000F22
	add r0, r5, r2
	add r0, r4, r0
	strb r6, [r0]
	sub r1, r1, #64
	add r0, r5, r1
	add r0, r4, r0
	strb r6, [r0]
_08101C24:
	add r0, r4, #0
	bl Sprite3_CheckIfActive
	lsl r0, r0, #24
	cmp r0, #0
	bne _08101C88
	add r0, r4, #0
	bl sub_080C1FD0
	lsl r0, r0, #24
	lsr r5, r0, #24
	cmp r5, #0
	bne _08101C88
	add r0, r4, #0
	bl sub_080C5044
	add r0, r4, #0
	bl sub_080C99DC
	ldr r6, _08101C90  @ =gRam
	ldr r2, _08101CB0  @ =0x00001152
	add r0, r6, r2
	add r2, r4, r0
	ldrb r0, [r2]
	sub r0, r0, #2
	strb r0, [r2]
	ldr r1, _08101CB4  @ =0x00001142
	add r0, r6, r1
	add r3, r4, r0
	ldrb r1, [r3]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	beq _08101C6C
	strb r5, [r2]
	strb r5, [r3]
_08101C6C:
	add r0, r4, #0
	bl sub_080C7A20
	ldr r1, _08101CB8  @ =gUnknown_0817B474
	ldr r2, _08101CA8  @ =0x00000F52
	add r0, r6, r2
	add r0, r4, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	add r0, r0, r1
	ldr r1, [r0]
	add r0, r4, #0
	bl _call_via_r1
_08101C88:
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08101C90:
	.4byte gRam
_08101C94:
	.4byte 0x00000F92
_08101C98:
	.4byte 0x00000F62
_08101C9C:
	.4byte gUnknown_0817B470
_08101CA0:
	.4byte 0x00001072
_08101CA4:
	.4byte 0x00001042
_08101CA8:
	.4byte 0x00000F52
_08101CAC:
	.4byte 0x00000F22
_08101CB0:
	.4byte 0x00001152
_08101CB4:
	.4byte 0x00001142
_08101CB8:
	.4byte gUnknown_0817B474
	THUMB_FUNC_END sub_08101BC0

