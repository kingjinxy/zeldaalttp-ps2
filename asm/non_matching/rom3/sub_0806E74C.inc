	THUMB_FUNC_START sub_0806E74C
sub_0806E74C: @ 0x0806E74C
	push {r4,r5,lr}
	mov r5, #52
	mov r3, #60
	ldr r2, _0806E7AC  @ =gRam
	ldr r1, _0806E7B0  @ =0x00001727
	add r0, r2, r1
	ldrb r1, [r0]
	mov r0, #4
	and r0, r0, r1
	add r4, r2, #0
	cmp r0, #0
	beq _0806E786
	mov r5, #50
	mov r3, #56
	ldr r0, _0806E7B4  @ =0x00000B1E
	add r1, r4, r0
	mov r0, #0
	strh r0, [r1]
	mov r1, #175
	lsl r1, r1, #4
	add r0, r4, r1
	ldrh r0, [r0]
	cmp r0, #2
	beq _0806E786
	mov r0, #161
	lsl r0, r0, #4
	add r1, r4, r0
	mov r0, #0
	strb r0, [r1]
_0806E786:
	ldr r1, _0806E7B8  @ =0x00000B0C
	add r0, r4, r1
	strh r3, [r0]
	add r0, r5, #0
	mov r1, #0
	bl sub_0812A324
	ldr r0, _0806E7BC  @ =0x00001712
	add r1, r4, r0
	mov r0, #1
	strb r0, [r1]
	ldr r0, _0806E7C0  @ =0x000009E8
	add r1, r4, r0
	ldrh r0, [r1]
	add r0, r0, #1
	strh r0, [r1]
	pop {r4,r5}
	pop {r0}
	bx r0
_0806E7AC:
	.4byte gRam
_0806E7B0:
	.4byte 0x00001727
_0806E7B4:
	.4byte 0x00000B1E
_0806E7B8:
	.4byte 0x00000B0C
_0806E7BC:
	.4byte 0x00001712
_0806E7C0:
	.4byte 0x000009E8
	THUMB_FUNC_END sub_0806E74C

