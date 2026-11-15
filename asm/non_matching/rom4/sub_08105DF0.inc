	THUMB_FUNC_START sub_08105DF0
sub_08105DF0: @ 0x08105DF0
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r0, r0, #24
	ldr r1, _08105E7C  @ =gUnknown_0817BE90
	add r0, r0, r1
	ldrb r5, [r0]
	ldr r0, _08105E80  @ =gUnknown_0200EC18
	add r2, r5, r0
	ldr r1, _08105E84  @ =gRam
	ldr r3, _08105E88  @ =0x00001622
	add r0, r1, r3
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r6, _08105E8C  @ =gUnknown_0200EC19
	add r2, r5, r6
	ldr r7, _08105E90  @ =0x00001623
	add r0, r1, r7
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r0, _08105E94  @ =gUnknown_0200ED18
	add r2, r5, r0
	add r3, r3, #2
	add r0, r1, r3
	ldrb r0, [r0]
	strb r0, [r2]
	ldr r6, _08105E98  @ =gUnknown_0200ED19
	add r2, r5, r6
	add r7, r7, #2
	add r0, r1, r7
	ldrb r0, [r0]
	strb r0, [r2]
	mov r0, #150
	lsl r0, r0, #4
	add r1, r1, r0
	mov r0, #0
	strh r0, [r1]
	mov r2, #128
	lsl r2, r2, #8
	mov r12, r2
	mov r8, r1
_08105E44:
	ldr r3, _08105E80  @ =gUnknown_0200EC18
	add r0, r5, r3
	ldrb r1, [r0]
	ldr r6, _08105E8C  @ =gUnknown_0200EC19
	add r0, r5, r6
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r1, r0
	ldr r7, _08105E9C  @ =gUnknown_0200EC1A
	add r3, r5, r7
	ldrb r1, [r3]
	ldr r0, _08105EA0  @ =gUnknown_0200EC1B
	add r4, r5, r0
	ldrb r0, [r4]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r1, r2, r1
	lsl r1, r1, #16
	lsr r1, r1, #16
	add r0, r1, #0
	sub r0, r0, #8
	mov r6, r12
	and r0, r0, r6
	cmp r0, #0
	bne _08105EA4
	add r0, r2, #0
	sub r0, r0, #8
	b _08105EB4
_08105E7C:
	.4byte gUnknown_0817BE90
_08105E80:
	.4byte gUnknown_0200EC18
_08105E84:
	.4byte gRam
_08105E88:
	.4byte 0x00001622
_08105E8C:
	.4byte gUnknown_0200EC19
_08105E90:
	.4byte 0x00001623
_08105E94:
	.4byte gUnknown_0200ED18
_08105E98:
	.4byte gUnknown_0200ED19
_08105E9C:
	.4byte gUnknown_0200EC1A
_08105EA0:
	.4byte gUnknown_0200EC1B
_08105EA4:
	add r0, r1, #0
	add r0, r0, #8
	mov r7, r12
	and r0, r0, r7
	cmp r0, #0
	beq _08105EBA
	add r0, r2, #0
	add r0, r0, #8
_08105EB4:
	strb r0, [r3]
	lsr r0, r0, #8
	strb r0, [r4]
_08105EBA:
	ldr r1, _08105EF8  @ =gUnknown_0200ED18
	add r0, r5, r1
	ldrb r1, [r0]
	ldr r2, _08105EFC  @ =gUnknown_0200ED19
	add r0, r5, r2
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r2, r1, r0
	ldr r6, _08105F00  @ =gUnknown_0200ED1A
	add r3, r5, r6
	ldrb r1, [r3]
	ldr r7, _08105F04  @ =gUnknown_0200ED1B
	add r4, r5, r7
	ldrb r0, [r4]
	lsl r0, r0, #8
	add r1, r1, r0
	sub r1, r2, r1
	lsl r1, r1, #16
	lsr r1, r1, #16
	add r0, r1, #0
	sub r0, r0, #8
	mov r7, #128
	lsl r7, r7, #8
	add r6, r7, #0
	and r0, r0, r6
	cmp r0, #0
	bne _08105F08
	add r0, r2, #0
	sub r0, r0, #8
	b _08105F16
	.byte 0x00
	.byte 0x00
_08105EF8:
	.4byte gUnknown_0200ED18
_08105EFC:
	.4byte gUnknown_0200ED19
_08105F00:
	.4byte gUnknown_0200ED1A
_08105F04:
	.4byte gUnknown_0200ED1B
_08105F08:
	add r0, r1, #0
	add r0, r0, #8
	and r0, r0, r6
	cmp r0, #0
	beq _08105F1C
	add r0, r2, #0
	add r0, r0, #8
_08105F16:
	strb r0, [r3]
	lsr r0, r0, #8
	strb r0, [r4]
_08105F1C:
	add r0, r5, #2
	lsl r0, r0, #24
	lsr r5, r0, #24
	mov r1, r8
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	lsl r0, r0, #16
	asr r0, r0, #16
	cmp r0, #5
	ble _08105E44
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_08105DF0

