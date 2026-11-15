	THUMB_FUNC_START sub_08115E34
sub_08115E34: @ 0x08115E34
	push {r4,r5,lr}
	ldr r3, _08115E90  @ =gRam
	mov r0, #150
	lsl r0, r0, #4
	add r2, r3, r0
	ldrh r0, [r2]
	ldr r4, _08115E94  @ =0x00000974
	add r1, r3, r4
	add r0, r0, #8
	ldrh r1, [r1]
	add r0, r0, r1
	strh r0, [r2]
	ldr r5, _08115E98  @ =0x00000964
	add r4, r3, r5
	ldrh r0, [r4]
	add r0, r0, #8
	strh r0, [r4]
	mov r1, #182
	lsl r1, r1, #5
	add r0, r3, r1
	mov r5, #0
	ldrsh r1, [r0, r5]
	mov r5, #0
	ldrsh r0, [r2, r5]
	sub r0, r0, #12
	sub r1, r1, r0
	cmp r1, #0
	bge _08115E6E
	neg r1, r1
_08115E6E:
	cmp r1, #27
	bgt _08115EA0
	ldr r1, _08115E9C  @ =0x000016C4
	add r0, r3, r1
	mov r2, #0
	ldrsh r1, [r0, r2]
	mov r5, #0
	ldrsh r0, [r4, r5]
	sub r0, r0, #12
	sub r0, r1, r0
	cmp r0, #0
	bge _08115E88
	neg r0, r0
_08115E88:
	cmp r0, #23
	bgt _08115EA0
	mov r0, #1
	b _08115EA2
_08115E90:
	.4byte gRam
_08115E94:
	.4byte 0x00000974
_08115E98:
	.4byte 0x00000964
_08115E9C:
	.4byte 0x000016C4
_08115EA0:
	mov r0, #0
_08115EA2:
	pop {r4,r5}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_08115E34

