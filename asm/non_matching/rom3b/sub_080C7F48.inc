	THUMB_FUNC_START sub_080C7F48
sub_080C7F48: @ 0x080C7F48
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r8, r0
	lsl r1, r0, #4
	ldr r7, _080C7FCC  @ =gRam
	ldr r2, _080C7FD0  @ =0x00000996
	add r0, r7, r2
	ldrb r0, [r0]
	eor r1, r1, r0
	ldr r3, _080C7FD4  @ =0x000009AD
	add r0, r7, r3
	ldrb r0, [r0]
	orr r1, r1, r0
	ldr r2, _080C7FD8  @ =gUnknown_08172478
	ldr r3, _080C7FDC  @ =0x00000FC2
	add r0, r7, r3
	add r0, r0, r8
	ldrb r0, [r0]
	lsr r0, r0, #4
	add r0, r0, r2
	ldrb r0, [r0]
	and r1, r1, r0
	cmp r1, #0
	bne _080C7FC2
	bl GetRandomInt
	mov r4, #3
	add r1, r4, #0
	and r1, r1, r0
	ldr r5, _080C7FE0  @ =gUnknown_08172470
	add r0, r1, r5
	ldrb r2, [r0]
	mov r3, #150
	lsl r3, r3, #4
	add r0, r7, r3
	strb r2, [r0]
	ldr r6, _080C7FE4  @ =gUnknown_08172474
	add r1, r1, r6
	ldrb r1, [r1]
	ldr r2, _080C7FE8  @ =0x00000961
	add r0, r7, r2
	strb r1, [r0]
	bl GetRandomInt
	and r4, r4, r0
	add r5, r4, r5
	ldrb r1, [r5]
	ldr r3, _080C7FEC  @ =0x00000964
	add r0, r7, r3
	strb r1, [r0]
	add r4, r4, r6
	ldrb r1, [r4]
	ldr r2, _080C7FF0  @ =0x00000965
	add r0, r7, r2
	strb r1, [r0]
	mov r0, r8
	bl sub_080C9A58
_080C7FC2:
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080C7FCC:
	.4byte gRam
_080C7FD0:
	.4byte 0x00000996
_080C7FD4:
	.4byte 0x000009AD
_080C7FD8:
	.4byte gUnknown_08172478
_080C7FDC:
	.4byte 0x00000FC2
_080C7FE0:
	.4byte gUnknown_08172470
_080C7FE4:
	.4byte gUnknown_08172474
_080C7FE8:
	.4byte 0x00000961
_080C7FEC:
	.4byte 0x00000964
_080C7FF0:
	.4byte 0x00000965
	THUMB_FUNC_END sub_080C7F48

