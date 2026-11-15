	THUMB_FUNC_START sub_080C6C7C
sub_080C6C7C: @ 0x080C6C7C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r9, r0
	ldr r4, _080C6D74  @ =gRam
	ldr r1, _080C6D78  @ =0x00000B14
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #4
	bne _080C6CA4
	ldr r2, _080C6D7C  @ =0x00000D94
	add r0, r4, r2
	add r0, r0, r9
	mov r1, #48
	strb r1, [r0]
_080C6CA4:
	mov r1, sp
	add r1, r1, #5
	add r0, sp, #4
	mov r2, r9
	bl sub_080C5ACC
	lsl r0, r0, #24
	cmp r0, #0
	bne _080C6D62
	ldr r5, _080C6D80  @ =0x00001032
	add r0, r4, r5
	add r0, r0, r9
	ldrb r1, [r0]
	mov r0, #32
	and r0, r0, r1
	lsl r0, r0, #24
	lsr r0, r0, #27
	ldr r2, _080C6D84  @ =0x00000978
	add r1, r4, r2
	strb r0, [r1]
	sub r5, r5, #112
	add r0, r4, r5
	add r0, r0, r9
	ldrb r1, [r0]
	mov r2, #28
	mov r0, #28
	and r0, r0, r1
	eor r0, r0, r2
	add r0, r0, #3
	add r6, r0, #0
	mov r7, #3
	mov r8, r4
	ldr r0, _080C6D88  @ =0x00000969
	add r0, r0, r8
	mov r10, r0
_080C6CEA:
	ldr r0, _080C6D8C  @ =gUnknown_08172202
	add r4, r6, r0
	ldrb r0, [r4]
	cmp r0, #0
	beq _080C6D4C
	ldr r0, _080C6D90  @ =0x000015E8
	add r0, r0, r8
	ldr r2, _080C6D84  @ =0x00000978
	add r2, r2, r8
	ldrb r1, [r0]
	ldrb r3, [r2]
	ldr r0, _080C6D94  @ =gUnknown_081721C2
	add r0, r6, r0
	sub r1, r1, r3
	ldrb r0, [r0]
	add r1, r1, r0
	lsl r1, r1, #24
	lsr r1, r1, #24
	ldr r0, _080C6D98  @ =0x000015E9
	add r0, r0, r8
	ldrb r2, [r0]
	ldr r0, _080C6D9C  @ =gUnknown_081721E2
	add r0, r6, r0
	sub r2, r2, r3
	ldrb r0, [r0]
	add r2, r2, r0
	lsl r2, r2, #24
	lsr r2, r2, #24
	ldr r0, _080C6DA0  @ =gUnknown_03003E74
	sub r3, r7, #3
	ldrh r0, [r0]
	sub r0, r0, r3
	lsl r0, r0, #16
	lsr r0, r0, #16
	ldrb r3, [r4]
	mov r5, r10
	ldrb r4, [r5]
	mov r5, #48
	and r5, r5, r4
	ldr r4, _080C6DA4  @ =gUnknown_08172222
	add r4, r6, r4
	ldrb r4, [r4]
	orr r5, r5, r4
	lsl r5, r5, #8
	orr r3, r3, r5
	mov r4, #0
	str r4, [sp]
	bl sub_080C6004
_080C6D4C:
	sub r7, r7, #1
	sub r0, r6, #1
	lsl r0, r0, #24
	lsr r6, r0, #24
	cmp r7, #0
	bge _080C6CEA
	mov r0, r9
	mov r1, #0
	mov r2, #3
	bl sub_080C5DA0
_080C6D62:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080C6D74:
	.4byte gRam
_080C6D78:
	.4byte 0x00000B14
_080C6D7C:
	.4byte 0x00000D94
_080C6D80:
	.4byte 0x00001032
_080C6D84:
	.4byte 0x00000978
_080C6D88:
	.4byte 0x00000969
_080C6D8C:
	.4byte gUnknown_08172202
_080C6D90:
	.4byte 0x000015E8
_080C6D94:
	.4byte gUnknown_081721C2
_080C6D98:
	.4byte 0x000015E9
_080C6D9C:
	.4byte gUnknown_081721E2
_080C6DA0:
	.4byte gUnknown_03003E74
_080C6DA4:
	.4byte gUnknown_08172222
	THUMB_FUNC_END sub_080C6C7C

