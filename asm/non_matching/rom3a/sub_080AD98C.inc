	THUMB_FUNC_START sub_080AD98C
sub_080AD98C: @ 0x080AD98C
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r5, r0, #24
	ldr r2, _080ADA50  @ =gRam
	ldr r1, _080ADA54  @ =0x00000E3D
	add r0, r2, r1
	add r0, r5, r0
	ldrb r0, [r0]
	lsl r0, r0, #2
	mov r1, sp
	strb r0, [r1]
	ldr r7, _080ADA58  @ =0x00001732
	add r1, r2, r7
	mov r0, #2
	strb r0, [r1]
	add r4, r2, #0
	mov r6, sp
	ldr r0, _080ADA5C  @ =0x00000964
	add r0, r0, r4
	mov r8, r0
	add r3, r1, #0
	ldr r1, _080ADA60  @ =gUnknown_0816E56C
	mov r10, r1
	ldr r2, _080ADA64  @ =gUnknown_0816E57C
	mov r9, r2
_080AD9C8:
	ldrb r1, [r6]
	lsr r1, r1, #1
	lsl r1, r1, #1
	mov r7, r10
	add r2, r1, r7
	mov r7, #182
	lsl r7, r7, #5
	add r0, r4, r7
	ldrh r0, [r0]
	ldrh r2, [r2]
	add r0, r0, r2
	mov r2, r8
	strh r0, [r2]
	add r1, r1, r9
	add r7, r7, #4
	add r0, r4, r7
	ldrh r0, [r0]
	ldrh r1, [r1]
	add r0, r0, r1
	ldr r1, _080ADA68  @ =gUnknown_03002B98
	strh r0, [r1]
	ldr r2, _080ADA6C  @ =0x00000DC5
	add r0, r4, r2
	add r0, r5, r0
	mov r7, r8
	ldrb r1, [r7]
	strb r1, [r0]
	ldr r0, _080ADA70  @ =0x00000DD9
	add r1, r4, r0
	add r1, r5, r1
	ldr r2, _080ADA74  @ =0x00000965
	add r0, r4, r2
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r7, _080ADA78  @ =0x00000DCF
	add r0, r4, r7
	add r0, r5, r0
	ldr r2, _080ADA68  @ =gUnknown_03002B98
	ldrb r1, [r2]
	strb r1, [r0]
	add r7, r7, #20
	add r1, r4, r7
	add r1, r5, r1
	ldr r2, _080ADA7C  @ =0x00000969
	add r0, r4, r2
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r5, #0
	mov r1, sp
	str r3, [sp, #4]
	bl sub_080BFE6C
	lsl r0, r0, #24
	ldr r3, [sp, #4]
	cmp r0, #0
	bne _080ADA80
	ldrb r0, [r6]
	add r0, r0, #2
	strb r0, [r6]
	ldrb r0, [r3]
	sub r0, r0, #1
	strb r0, [r3]
	lsl r0, r0, #24
	cmp r0, #0
	bge _080AD9C8
	mov r0, #0
	b _080ADA82
	.byte 0x00
	.byte 0x00
_080ADA50:
	.4byte gRam
_080ADA54:
	.4byte 0x00000E3D
_080ADA58:
	.4byte 0x00001732
_080ADA5C:
	.4byte 0x00000964
_080ADA60:
	.4byte gUnknown_0816E56C
_080ADA64:
	.4byte gUnknown_0816E57C
_080ADA68:
	.4byte gUnknown_03002B98
_080ADA6C:
	.4byte 0x00000DC5
_080ADA70:
	.4byte 0x00000DD9
_080ADA74:
	.4byte 0x00000965
_080ADA78:
	.4byte 0x00000DCF
_080ADA7C:
	.4byte 0x00000969
_080ADA80:
	mov r0, #1
_080ADA82:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r1}
	bx r1
	THUMB_FUNC_END sub_080AD98C

	.byte 0x00
	.byte 0x00
