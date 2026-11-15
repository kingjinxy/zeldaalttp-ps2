	THUMB_FUNC_START sub_080C6A24
sub_080C6A24: @ 0x080C6A24
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r6, r0, #24
	ldr r4, _080C6A64  @ =gRam
	ldr r0, _080C6A68  @ =0x00000F82
	add r3, r4, r0
	add r2, r6, r3
	ldrb r1, [r2]
	mov r0, #128
	and r0, r0, r1
	cmp r0, #0
	bne _080C6A5A
	lsl r0, r1, #24
	lsr r0, r0, #24
	cmp r0, #5
	bls _080C6A5A
	cmp r0, #16
	bne _080C6A70
	ldr r1, _080C6A6C  @ =0x00001122
	add r0, r4, r1
	add r0, r6, r0
	mov r1, #12
	strb r1, [r0]
_080C6A5A:
	add r0, r6, #0
	bl sub_080C6E9C
	b _080C6B7A
	.byte 0x00
	.byte 0x00
_080C6A64:
	.4byte gRam
_080C6A68:
	.4byte 0x00000F82
_080C6A6C:
	.4byte 0x00001122
_080C6A70:
	mov r5, #3
	mov r10, r2
_080C6A74:
	mov r0, #236
	add r1, r6, #0
	bl sub_080CA538
	lsl r7, r0, #24
	asr r4, r7, #24
	lsl r5, r5, #24
	mov r8, r5
	cmp r4, #0
	blt _080C6B62
	ldr r5, _080C6B28  @ =gRam
	ldr r2, _080C6B2C  @ =0x00001142
	add r0, r5, r2
	add r1, r4, r0
	add r0, r6, r0
	ldrb r0, [r0]
	mov r2, #0
	mov r9, r2
	strb r0, [r1]
	mov r1, #150
	lsl r1, r1, #4
	add r0, r5, r1
	ldrb r2, [r0]
	add r1, r1, #1
	add r0, r5, r1
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r2, r2, r0
	ldr r0, _080C6B30  @ =gUnknown_081721B2
	mov r1, r8
	asr r3, r1, #24
	add r0, r3, r0
	ldrb r1, [r0]
	ldr r0, _080C6B34  @ =gUnknown_081721B6
	add r0, r3, r0
	ldrb r0, [r0]
	lsl r0, r0, #8
	add r1, r1, r0
	add r2, r2, r1
	ldr r1, _080C6B38  @ =0x00000EE2
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
	add r1, r1, #32
	add r0, r5, r1
	add r0, r4, r0
	lsr r2, r2, #8
	strb r2, [r0]
	ldr r2, _080C6B3C  @ =0x00000964
	add r0, r5, r2
	ldrb r2, [r0]
	ldr r1, _080C6B40  @ =0x00000965
	add r0, r5, r1
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r2, r2, r0
	ldr r0, _080C6B44  @ =gUnknown_081721BA
	add r0, r3, r0
	ldrb r1, [r0]
	ldr r0, _080C6B48  @ =gUnknown_081721BE
	add r3, r3, r0
	ldrb r0, [r3]
	lsl r0, r0, #8
	add r1, r1, r0
	add r2, r2, r1
	ldr r1, _080C6B4C  @ =0x00000ED2
	add r0, r5, r1
	add r0, r4, r0
	strb r2, [r0]
	add r1, r1, #32
	add r0, r5, r1
	add r0, r4, r0
	lsr r2, r2, #8
	strb r2, [r0]
	ldr r2, _080C6B50  @ =gUnknown_030031B2
	add r1, r4, r2
	mov r0, #1
	strb r0, [r1]
	lsr r0, r7, #24
	bl sub_080C6E3C
	mov r1, r10
	ldrb r0, [r1]
	cmp r0, #6
	bls _080C6B58
	ldr r2, _080C6B54  @ =0x00001122
	add r0, r5, r2
	add r0, r4, r0
	mov r1, r9
	b _080C6B60
_080C6B28:
	.4byte gRam
_080C6B2C:
	.4byte 0x00001142
_080C6B30:
	.4byte gUnknown_081721B2
_080C6B34:
	.4byte gUnknown_081721B6
_080C6B38:
	.4byte 0x00000EE2
_080C6B3C:
	.4byte 0x00000964
_080C6B40:
	.4byte 0x00000965
_080C6B44:
	.4byte gUnknown_081721BA
_080C6B48:
	.4byte gUnknown_081721BE
_080C6B4C:
	.4byte 0x00000ED2
_080C6B50:
	.4byte gUnknown_030031B2
_080C6B54:
	.4byte 0x00001122
_080C6B58:
	ldr r2, _080C6B88  @ =0x00001122
	add r0, r5, r2
	add r0, r4, r0
	mov r1, #12
_080C6B60:
	strb r1, [r0]
_080C6B62:
	mov r0, #255
	lsl r0, r0, #24
	add r0, r0, r8
	lsr r5, r0, #24
	cmp r0, #0
	bge _080C6A74
	ldr r0, _080C6B8C  @ =gRam
	ldr r1, _080C6B90  @ =0x00000FA2
	add r0, r0, r1
	add r0, r6, r0
	mov r1, #0
	strb r1, [r0]
_080C6B7A:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080C6B88:
	.4byte 0x00001122
_080C6B8C:
	.4byte gRam
_080C6B90:
	.4byte 0x00000FA2
	THUMB_FUNC_END sub_080C6A24

