	THUMB_FUNC_START sub_080160F8
sub_080160F8: @ 0x080160F8
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	ldr r0, _080161D4  @ =gUnknown_02024024
	mov r8, r0
	ldr r1, _080161D8  @ =gUnknown_02010324
	mov r12, r1
	ldr r5, _080161DC  @ =0xFFFFB000
	add r5, r5, r8
	ldr r3, _080161DC  @ =0xFFFFB000
	add r3, r3, r12
	ldr r6, _080161E0  @ =0xFFFFD000
	add r6, r6, r8
	ldr r4, _080161E0  @ =0xFFFFD000
	add r4, r4, r12
	mov r2, #0
	mov r9, r6
	mov r10, r4
	ldr r7, _080161E4  @ =gUnknown_0814AB24
_08016122:
	ldrh r0, [r5]
	lsl r0, r0, #1
	add r0, r0, r8
	ldrh r0, [r0]
	add r0, r0, r7
	ldrb r0, [r0]
	strb r0, [r6]
	add r5, r5, #2
	add r6, r6, #1
	ldrh r1, [r3]
	ldr r0, _080161E8  @ =0x00007FFF
	and r0, r0, r1
	lsl r0, r0, #1
	add r0, r0, r12
	ldrh r0, [r0]
	add r0, r0, r7
	ldrb r0, [r0]
	strb r0, [r4]
	add r3, r3, #2
	add r4, r4, #1
	add r0, r2, #1
	lsl r0, r0, #16
	lsr r2, r0, #16
	ldr r0, _080161EC  @ =0x00000FFF
	cmp r2, r0
	bls _08016122
	ldr r1, _080161F0  @ =gUnknown_03000450
	ldrh r0, [r1, #40]
	lsr r0, r0, #4
	mov r1, r9
	add r6, r0, r1
	mov r1, r10
	add r4, r0, r1
	mov r5, r9
	add r5, r5, #63
	mov r3, r10
	add r3, r3, #63
	mov r2, #0
	mov r1, #255
_08016170:
	strb r1, [r6]
	strb r1, [r5]
	strb r1, [r4]
	strb r1, [r3]
	add r6, r6, #64
	add r5, r5, #64
	add r4, r4, #64
	add r3, r3, #64
	add r0, r2, #1
	lsl r0, r0, #16
	lsr r2, r0, #16
	cmp r2, #63
	bls _08016170
	ldr r0, _080161F0  @ =gUnknown_03000450
	ldrh r1, [r0, #42]
	ldr r0, _080161F4  @ =0x0000FFF0
	and r0, r0, r1
	lsl r0, r0, #2
	mov r1, r9
	add r6, r0, r1
	mov r1, r10
	add r4, r0, r1
	mov r5, #252
	lsl r5, r5, #4
	add r5, r5, r9
	mov r3, #252
	lsl r3, r3, #4
	add r3, r3, r10
	mov r2, #0
	mov r1, #255
_080161AC:
	strb r1, [r6]
	add r6, r6, #1
	strb r1, [r5]
	add r5, r5, #1
	strb r1, [r4]
	add r4, r4, #1
	strb r1, [r3]
	add r3, r3, #1
	add r0, r2, #1
	lsl r0, r0, #16
	lsr r2, r0, #16
	cmp r2, #63
	bls _080161AC
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080161D4:
	.4byte gUnknown_02024024
_080161D8:
	.4byte gUnknown_02010324
_080161DC:
	.4byte 0xFFFFB000
_080161E0:
	.4byte 0xFFFFD000
_080161E4:
	.4byte gUnknown_0814AB24
_080161E8:
	.4byte 0x00007FFF
_080161EC:
	.4byte 0x00000FFF
_080161F0:
	.4byte gUnknown_03000450
_080161F4:
	.4byte 0x0000FFF0
	THUMB_FUNC_END sub_080160F8

