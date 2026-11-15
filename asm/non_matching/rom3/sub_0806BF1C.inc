	THUMB_FUNC_START sub_0806BF1C
sub_0806BF1C: @ 0x0806BF1C
	push {lr}
	bl sub_0808A8C4
	ldr r2, _0806BF50  @ =gRam
	ldr r1, _0806BF54  @ =0x000009AD
	add r0, r2, r1
	ldrb r0, [r0]
	cmp r0, #0
	bne _0806BF4A
	ldr r3, _0806BF58  @ =0x000009AC
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #6
	bne _0806BF46
	ldr r1, _0806BF5C  @ =0x0000166C
	add r0, r2, r1
	ldrh r1, [r0]
	mov r3, #182
	lsl r3, r3, #5
	add r0, r2, r3
	strh r1, [r0]
_0806BF46:
	bl sub_0806A948
_0806BF4A:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0806BF50:
	.4byte gRam
_0806BF54:
	.4byte 0x000009AD
_0806BF58:
	.4byte 0x000009AC
_0806BF5C:
	.4byte 0x0000166C
	THUMB_FUNC_END sub_0806BF1C

