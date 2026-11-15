	THUMB_FUNC_START sub_080694F0
sub_080694F0: @ 0x080694F0
	push {r4,lr}
	sub sp, sp, #4
	mov r2, sp
	ldr r3, _08069530  @ =0x04000004
	mov r4, #2
_080694FA:
	ldrh r0, [r3]
	strh r0, [r2]
	ldrh r1, [r2]
	add r0, r4, #0
	and r0, r0, r1
	cmp r0, #0
	beq _080694FA
	ldr r2, _08069534  @ =0x04000010
	ldr r1, _08069538  @ =gRam
	mov r3, #149
	lsl r3, r3, #4
	add r0, r1, r3
	ldrh r0, [r0]
	strh r0, [r2]
	add r2, r2, #2
	ldr r0, _0806953C  @ =0x00000956
	add r1, r1, r0
	ldrh r0, [r1]
	strh r0, [r2]
	ldr r1, _08069540  @ =0x04000202
	mov r0, #4
	strh r0, [r1]
	add sp, sp, #4
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08069530:
	.4byte 0x04000004
_08069534:
	.4byte 0x04000010
_08069538:
	.4byte gRam
_0806953C:
	.4byte 0x00000956
_08069540:
	.4byte 0x04000202
	THUMB_FUNC_END sub_080694F0

