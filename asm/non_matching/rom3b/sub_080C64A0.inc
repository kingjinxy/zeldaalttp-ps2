	THUMB_FUNC_START sub_080C64A0
sub_080C64A0: @ 0x080C64A0
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r4, r0, #24
	mov r1, #0
	ldr r2, _080C64F8  @ =gRam
	ldr r3, _080C64FC  @ =0x000009B5
	add r0, r2, r3
	ldrb r0, [r0]
	cmp r0, #0
	beq _080C64EA
	mov r3, #0
	cmp r1, r4
	bge _080C64E8
	mov r8, r2
	ldr r0, _080C6500  @ =gUnknown_03003E74
	mov r12, r0
	ldr r6, _080C6504  @ =0x00000551
	mov r7, #13
	neg r7, r7
	mov r5, #4
_080C64CC:
	mov r1, r12
	ldrh r0, [r1]
	add r0, r0, r3
	lsl r0, r0, #3
	add r0, r0, r8
	add r0, r0, r6
	ldrb r2, [r0]
	add r1, r7, #0
	and r1, r1, r2
	orr r1, r1, r5
	strb r1, [r0]
	add r3, r3, #1
	cmp r3, r4
	blt _080C64CC
_080C64E8:
	mov r1, #1
_080C64EA:
	add r0, r1, #0
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r1}
	bx r1
	.byte 0x00
	.byte 0x00
_080C64F8:
	.4byte gRam
_080C64FC:
	.4byte 0x000009B5
_080C6500:
	.4byte gUnknown_03003E74
_080C6504:
	.4byte 0x00000551
	THUMB_FUNC_END sub_080C64A0

