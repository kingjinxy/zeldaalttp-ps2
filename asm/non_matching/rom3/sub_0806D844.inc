	THUMB_FUNC_START sub_0806D844
sub_0806D844: @ 0x0806D844
	push {lr}
	bl sub_08070A80
	ldr r1, _0806D8B4  @ =gRam
	mov r2, #177
	lsl r2, r2, #4
	add r0, r1, r2
	ldrh r0, [r0]
	cmp r0, #0
	bne _0806D89C
	ldr r2, _0806D8B8  @ =0x000009DA
	add r0, r1, r2
	ldrh r0, [r0]
	cmp r0, #172
	beq _0806D866
	cmp r0, #236
	bne _0806D876
_0806D866:
	ldr r2, _0806D8BC  @ =0x00000AA8
	add r0, r1, r2
	ldrh r1, [r0]
	mov r0, #192
	lsl r0, r0, #6
	and r0, r0, r1
	cmp r0, #0
	beq _0806D89C
_0806D876:
	ldr r1, _0806D8B4  @ =gRam
	mov r0, #177
	lsl r0, r0, #4
	add r2, r1, r0
	ldrh r0, [r2]
	add r0, r0, #1
	mov r3, #0
	strh r0, [r2]
	mov r2, #192
	lsl r2, r2, #4
	add r0, r1, r2
	strh r3, [r0]
	add r2, r2, #2
	add r0, r1, r2
	strh r3, [r0]
	ldr r0, _0806D8C0  @ =0x000009AD
	add r1, r1, r0
	mov r0, #5
	strb r0, [r1]
_0806D89C:
	ldr r1, _0806D8B4  @ =gRam
	ldr r2, _0806D8B8  @ =0x000009DA
	add r0, r1, r2
	ldrh r0, [r0]
	cmp r0, #18
	bne _0806D8C8
	ldr r0, _0806D8C4  @ =0x00000A3C
	add r1, r1, r0
	mov r0, #10
	strh r0, [r1]
	b _0806D8E0
	.byte 0x00
	.byte 0x00
_0806D8B4:
	.4byte gRam
_0806D8B8:
	.4byte 0x000009DA
_0806D8BC:
	.4byte 0x00000AA8
_0806D8C0:
	.4byte 0x000009AD
_0806D8C4:
	.4byte 0x00000A3C
_0806D8C8:
	cmp r0, #2
	bne _0806D8DC
	ldr r2, _0806D8D8  @ =0x00000A3C
	add r1, r1, r2
	mov r0, #9
	strh r0, [r1]
	b _0806D8E0
	.byte 0x00
	.byte 0x00
_0806D8D8:
	.4byte 0x00000A3C
_0806D8DC:
	bl sub_0806D2A0
_0806D8E0:
	pop {r0}
	bx r0
	THUMB_FUNC_END sub_0806D844

