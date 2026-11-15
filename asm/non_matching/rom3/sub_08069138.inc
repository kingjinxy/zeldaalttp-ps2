	THUMB_FUNC_START sub_08069138
sub_08069138: @ 0x08069138
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #4
	ldr r4, _080691B0  @ =gRam
	ldr r1, _080691B4  @ =0x000009A3
	add r0, r4, r1
	mov r5, #0
	mov r7, #1
	strb r7, [r0]
	add r1, r1, #9
	add r0, r4, r1
	strb r5, [r0]
	bl sub_080BE560
	ldr r0, _080691B8  @ =gUnknown_02002434
	mov r8, r0
	ldrh r1, [r0]
	mov r10, r1
	ldr r6, _080691BC  @ =gUnknown_020023F3
	ldrb r0, [r6]
	mov r9, r0
	mov r0, sp
	strh r5, [r0]
	ldr r1, _080691C0  @ =gUnknown_02002000
	ldr r2, _080691C4  @ =0x01000300
	bl CpuSet
	mov r0, r10
	mov r1, r8
	strh r0, [r1]
	mov r1, r9
	strb r1, [r6]
	mov r1, #201
	lsl r1, r1, #4
	add r0, r4, r1
	strh r7, [r0]
	ldr r0, _080691C8  @ =0x00000A3C
	add r1, r4, r0
	ldr r0, _080691CC  @ =0x0000FFFF
	strh r0, [r1]
	ldr r0, _080691D0  @ =0x00000A3E
	add r1, r4, r0
	mov r0, #255
	strb r0, [r1]
	ldr r1, _080691D4  @ =0x00000A44
	add r4, r4, r1
	mov r0, #1
	neg r0, r0
	strb r0, [r4]
	add sp, sp, #4
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
_080691B0:
	.4byte gRam
_080691B4:
	.4byte 0x000009A3
_080691B8:
	.4byte gUnknown_02002434
_080691BC:
	.4byte gUnknown_020023F3
_080691C0:
	.4byte gUnknown_02002000
_080691C4:
	.4byte 0x01000300
_080691C8:
	.4byte 0x00000A3C
_080691CC:
	.4byte 0x0000FFFF
_080691D0:
	.4byte 0x00000A3E
_080691D4:
	.4byte 0x00000A44
	THUMB_FUNC_END sub_08069138

