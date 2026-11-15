	THUMB_FUNC_START sub_080AC5F4
sub_080AC5F4: @ 0x080AC5F4
	push {r4,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r1, r1, #24
	mov r2, sp
	bl sub_080AB89C
	lsl r0, r0, #24
	asr r2, r0, #24
	cmp r2, #0
	bne _080AC6A6
	ldr r4, _080AC6B0  @ =gRam
	mov r1, sp
	ldr r3, _080AC6B4  @ =0x00000E29
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	strb r2, [r0]
	mov r1, sp
	ldr r3, _080AC6B8  @ =0x00001844
	add r0, r4, r3
	ldrb r1, [r1]
	add r0, r0, r1
	strb r2, [r0]
	mov r1, sp
	ldr r2, _080AC6BC  @ =0x00000E33
	add r0, r4, r2
	ldrb r1, [r1]
	add r0, r0, r1
	mov r1, #23
	strb r1, [r0]
	mov r0, sp
	ldr r3, _080AC6C0  @ =0x00000E3D
	add r1, r4, r3
	ldrb r0, [r0]
	add r1, r1, r0
	ldr r0, _080AC6C4  @ =0x000016D5
	add r2, r4, r0
	ldrb r0, [r2]
	lsr r0, r0, #1
	strb r0, [r1]
	mov r1, #182
	lsl r1, r1, #5
	add r3, r4, r1
	ldr r0, _080AC6C8  @ =gUnknown_0816E164
	ldrb r1, [r2]
	lsr r1, r1, #1
	lsl r1, r1, #1
	add r0, r1, r0
	ldrh r0, [r0]
	ldrh r3, [r3]
	add r0, r0, r3
	mov r3, #150
	lsl r3, r3, #4
	add r2, r4, r3
	strh r0, [r2]
	ldr r0, _080AC6CC  @ =0x000016C4
	add r2, r4, r0
	ldr r0, _080AC6D0  @ =gUnknown_0816E16C
	add r1, r1, r0
	ldrh r0, [r1]
	ldrh r2, [r2]
	add r0, r0, r2
	ldr r2, _080AC6D4  @ =0x00000964
	add r1, r4, r2
	strh r0, [r1]
	mov r0, sp
	ldrb r0, [r0]
	bl sub_080ABA78
	mov r0, sp
	ldrb r0, [r0]
	mov r1, #37
	bl sub_080C19F8
	ldr r3, _080AC6D8  @ =0x000009AD
	add r0, r4, r3
	ldrb r0, [r0]
	cmp r0, #0
	bne _080AC6A6
	ldr r0, _080AC6DC  @ =0x0000178A
	add r1, r4, r0
	mov r0, #32
	strb r0, [r1]
	mov r0, #1
	bl sub_0809EEB4
_080AC6A6:
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080AC6B0:
	.4byte gRam
_080AC6B4:
	.4byte 0x00000E29
_080AC6B8:
	.4byte 0x00001844
_080AC6BC:
	.4byte 0x00000E33
_080AC6C0:
	.4byte 0x00000E3D
_080AC6C4:
	.4byte 0x000016D5
_080AC6C8:
	.4byte gUnknown_0816E164
_080AC6CC:
	.4byte 0x000016C4
_080AC6D0:
	.4byte gUnknown_0816E16C
_080AC6D4:
	.4byte 0x00000964
_080AC6D8:
	.4byte 0x000009AD
_080AC6DC:
	.4byte 0x0000178A
	THUMB_FUNC_END sub_080AC5F4

