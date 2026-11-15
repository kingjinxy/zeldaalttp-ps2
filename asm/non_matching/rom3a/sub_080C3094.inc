	THUMB_FUNC_START sub_080C3094
sub_080C3094: @ 0x080C3094
	push {r4,lr}
	lsl r0, r0, #24
	lsr r4, r0, #24
	ldr r2, _080C3118  @ =gRam
	ldr r1, _080C311C  @ =0x000009AD
	add r0, r2, r1
	ldr r1, _080C3120  @ =0x000016EA
	add r3, r2, r1
	ldrb r1, [r0]
	ldrb r0, [r3]
	orr r1, r1, r0
	ldr r3, _080C3124  @ =0x00001605
	add r0, r2, r3
	ldrb r0, [r0]
	orr r1, r1, r0
	cmp r1, #0
	bne _080C3112
	mov r1, #161
	lsl r1, r1, #4
	add r0, r2, r1
	ldr r3, _080C3128  @ =0x000010F2
	add r1, r2, r3
	add r1, r4, r1
	ldrb r0, [r0]
	ldrb r1, [r1]
	cmp r0, r1
	bne _080C3112
	mov r1, #15
	ldr r0, _080C312C  @ =0x00000FA2
	add r3, r2, r0
_080C30D0:
	lsl r0, r1, #24
	asr r1, r0, #24
	add r0, r1, r3
	ldrb r0, [r0]
	cmp r0, #10
	beq _080C3112
	sub r0, r1, #1
	lsl r0, r0, #24
	lsr r1, r0, #24
	cmp r0, #0
	bge _080C30D0
	ldr r1, _080C3130  @ =0x00000FF2
	add r0, r2, r1
	add r0, r4, r0
	ldrb r0, [r0]
	cmp r0, #11
	beq _080C310C
	cmp r0, #74
	beq _080C310C
	ldr r3, _080C3134  @ =0x00000F22
	add r1, r2, r3
	add r1, r4, r1
	sub r3, r3, #16
	add r0, r2, r3
	add r0, r4, r0
	ldrb r1, [r1]
	ldrb r0, [r0]
	orr r0, r0, r1
	cmp r0, #0
	bne _080C3112
_080C310C:
	add r0, r4, #0
	bl sub_080C3138
_080C3112:
	pop {r4}
	pop {r0}
	bx r0
_080C3118:
	.4byte gRam
_080C311C:
	.4byte 0x000009AD
_080C3120:
	.4byte 0x000016EA
_080C3124:
	.4byte 0x00001605
_080C3128:
	.4byte 0x000010F2
_080C312C:
	.4byte 0x00000FA2
_080C3130:
	.4byte 0x00000FF2
_080C3134:
	.4byte 0x00000F22
	THUMB_FUNC_END sub_080C3094

