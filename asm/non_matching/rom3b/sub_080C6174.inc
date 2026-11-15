	THUMB_FUNC_START sub_080C6174
sub_080C6174: @ 0x080C6174
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	lsl r0, r0, #24
	lsr r5, r0, #24
	lsl r1, r1, #16
	lsr r1, r1, #16
	mov r10, r1
	mov r4, #0
	cmp r4, r5
	bge _080C61E6
	ldr r0, _080C61F4  @ =gRam
	mov r9, r0
	ldr r0, _080C61F8  @ =gUnknown_03003E74
	mov r8, r0
	ldr r7, _080C61FC  @ =0x00000554
	ldr r0, _080C6200  @ =0x000003FF
	add r6, r0, #0
	ldr r0, _080C6204  @ =0xFFFFFC00
	mov r12, r0
_080C61A0:
	mov r0, r8
	ldrh r2, [r0]
	add r2, r2, r4
	lsl r2, r2, #3
	add r2, r2, r9
	add r2, r2, r7
	ldrh r3, [r2]
	lsl r0, r3, #22
	lsr r0, r0, #22
	mov r1, #255
	and r1, r1, r0
	and r1, r1, r6
	mov r0, r12
	and r0, r0, r3
	orr r0, r0, r1
	strh r0, [r2]
	mov r0, r8
	ldrh r2, [r0]
	add r2, r2, r4
	lsl r2, r2, #3
	add r2, r2, r9
	add r2, r2, r7
	ldrh r3, [r2]
	lsl r0, r3, #22
	lsr r0, r0, #22
	mov r1, r10
	orr r1, r1, r0
	and r1, r1, r6
	mov r0, r12
	and r0, r0, r3
	orr r0, r0, r1
	strh r0, [r2]
	add r4, r4, #1
	cmp r4, r5
	blt _080C61A0
_080C61E6:
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080C61F4:
	.4byte gRam
_080C61F8:
	.4byte gUnknown_03003E74
_080C61FC:
	.4byte 0x00000554
_080C6200:
	.4byte 0x000003FF
_080C6204:
	.4byte 0xFFFFFC00
	THUMB_FUNC_END sub_080C6174

