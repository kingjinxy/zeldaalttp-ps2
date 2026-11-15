	THUMB_FUNC_START sub_080BF00C
sub_080BF00C: @ 0x080BF00C
	push {r4-r6,lr}
	add r5, r2, #0
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r1, r1, #24
	lsr r6, r1, #24
	add r1, r6, #0
	bl sub_080AE870
	strb r0, [r5]
	lsl r0, r0, #24
	cmp r0, #0
	blt _080BF0BC
	ldr r2, _080BF098  @ =gRam
	ldr r1, _080BF09C  @ =0x00000E15
	add r0, r2, r1
	ldrb r3, [r5]
	add r0, r0, r3
	mov r4, #0
	strb r6, [r0]
	ldr r0, _080BF0A0  @ =0x00000E5B
	add r1, r2, r0
	ldrb r3, [r5]
	add r1, r1, r3
	ldr r3, _080BF0A4  @ =gUnknown_08226484
	sub r0, r6, #1
	add r0, r0, r3
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r1, _080BF0A8  @ =0x00000E47
	add r0, r2, r1
	ldrb r3, [r5]
	add r0, r0, r3
	mov r3, #161
	lsl r3, r3, #4
	add r1, r2, r3
	ldrb r1, [r1]
	strb r1, [r0]
	mov r1, #195
	lsl r1, r1, #5
	add r0, r2, r1
	ldrb r3, [r5]
	add r0, r0, r3
	ldr r3, _080BF0AC  @ =0x00000B1E
	add r1, r2, r3
	ldrh r1, [r1]
	strb r1, [r0]
	ldr r1, _080BF0B0  @ =0x00000DED
	add r0, r2, r1
	ldrb r3, [r5]
	add r0, r0, r3
	strb r4, [r0]
	add r1, r1, #10
	add r0, r2, r1
	ldrb r3, [r5]
	add r0, r0, r3
	strb r4, [r0]
	ldr r1, _080BF0B4  @ =0x00000A74
	add r0, r2, r1
	ldrb r3, [r5]
	add r0, r0, r3
	strb r4, [r0]
	ldr r0, _080BF0B8  @ =0x00000A7E
	add r2, r2, r0
	ldrb r5, [r5]
	add r2, r2, r5
	strb r4, [r2]
	mov r0, #0
	b _080BF0BE
	.byte 0x00
	.byte 0x00
_080BF098:
	.4byte gRam
_080BF09C:
	.4byte 0x00000E15
_080BF0A0:
	.4byte 0x00000E5B
_080BF0A4:
	.4byte gUnknown_08226484
_080BF0A8:
	.4byte 0x00000E47
_080BF0AC:
	.4byte 0x00000B1E
_080BF0B0:
	.4byte 0x00000DED
_080BF0B4:
	.4byte 0x00000A74
_080BF0B8:
	.4byte 0x00000A7E
_080BF0BC:
	mov r0, #1
_080BF0BE:
	pop {r4-r6}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080BF00C

