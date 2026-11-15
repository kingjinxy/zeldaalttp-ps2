	THUMB_FUNC_START sub_080E77E4
sub_080E77E4: @ 0x080E77E4
	push {r4-r7,lr}
	mov r7, r10
	mov r6, r9
	mov r5, r8
	push {r5-r7}
	sub sp, sp, #8
	lsl r0, r0, #24
	lsr r0, r0, #24
	str r0, [sp]
	mov r4, #3
	ldr r3, _080E7900  @ =gRam
	ldr r1, _080E7904  @ =0x00000FA2
	add r0, r3, r1
	ldrb r0, [r0]
	ldr r2, _080E7908  @ =0x00000FA3
	add r1, r3, r2
	ldrb r1, [r1]
	ldr r5, _080E790C  @ =0x00000FA4
	add r2, r3, r5
	add r0, r0, r1
	ldrb r2, [r2]
	add r0, r0, r2
	cmp r0, #9
	bgt _080E7816
	mov r4, #7
_080E7816:
	lsl r0, r4, #24
	cmp r0, #0
	blt _080E78EE
	mov r0, #1
	mov r10, r0
_080E7820:
	mov r0, #194
	ldr r1, [sp]
	str r3, [sp, #4]
	bl sub_080CA538
	add r7, r0, #0
	lsl r4, r4, #24
	mov r9, r4
	ldr r3, [sp, #4]
	cmp r7, #0
	blt _080E78E2
	mov r1, #150
	lsl r1, r1, #4
	add r0, r3, r1
	ldrh r4, [r0]
	add r4, r4, #4
	lsl r4, r4, #16
	lsr r6, r4, #16
	ldr r2, _080E7910  @ =0x00000964
	add r0, r3, r2
	ldrh r5, [r0]
	add r5, r5, #4
	lsl r5, r5, #16
	lsr r0, r5, #16
	mov r8, r0
	lsl r0, r7, #24
	lsr r0, r0, #24
	bl sub_080CAE50
	ldr r3, [sp, #4]
	ldr r1, _080E7914  @ =0x00000EE2
	add r0, r3, r1
	add r0, r7, r0
	strb r6, [r0]
	ldr r2, _080E7918  @ =0x00000F02
	add r0, r3, r2
	add r0, r7, r0
	lsr r4, r4, #24
	strb r4, [r0]
	ldr r4, _080E791C  @ =0x00000ED2
	add r0, r3, r4
	add r0, r7, r0
	mov r1, r8
	strb r1, [r0]
	sub r2, r2, #16
	add r0, r3, r2
	add r0, r7, r0
	lsr r5, r5, #24
	strb r5, [r0]
	ldr r4, _080E7920  @ =0x00001172
	add r0, r3, r4
	add r0, r7, r0
	mov r5, r10
	strb r5, [r0]
	ldr r1, _080E7924  @ =0x00000EA5
	add r0, r3, r1
	add r0, r7, r0
	strb r5, [r0]
	ldr r2, _080E7928  @ =0x00001132
	add r0, r3, r2
	add r0, r7, r0
	strb r5, [r0]
	sub r4, r4, #48
	add r0, r3, r4
	add r0, r7, r0
	mov r5, #0
	strb r5, [r0]
	ldr r1, _080E792C  @ =0x00001012
	add r0, r3, r1
	add r0, r7, r0
	mov r1, #32
	strb r1, [r0]
	ldr r2, _080E7930  @ =0x00000F22
	add r1, r3, r2
	add r1, r7, r1
	ldr r0, _080E7934  @ =gUnknown_08177894
	mov r4, r9
	asr r2, r4, #24
	add r0, r2, r0
	ldrb r0, [r0]
	strb r0, [r1]
	ldr r5, _080E7938  @ =0x00000F12
	add r1, r3, r5
	add r1, r7, r1
	ldr r0, _080E793C  @ =gUnknown_0817789C
	add r2, r2, r0
	ldrb r0, [r2]
	strb r0, [r1]
	str r3, [sp, #4]
	bl GetRandomInt
	ldr r1, _080E7940  @ =gUnknown_030031C2
	add r2, r7, r1
	mov r1, r10
	and r1, r1, r0
	strb r1, [r2]
	ldr r3, [sp, #4]
_080E78E2:
	mov r0, #255
	lsl r0, r0, #24
	add r0, r0, r9
	lsr r4, r0, #24
	cmp r0, #0
	bge _080E7820
_080E78EE:
	add sp, sp, #8
	pop {r3-r5}
	mov r8, r3
	mov r9, r4
	mov r10, r5
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080E7900:
	.4byte gRam
_080E7904:
	.4byte 0x00000FA2
_080E7908:
	.4byte 0x00000FA3
_080E790C:
	.4byte 0x00000FA4
_080E7910:
	.4byte 0x00000964
_080E7914:
	.4byte 0x00000EE2
_080E7918:
	.4byte 0x00000F02
_080E791C:
	.4byte 0x00000ED2
_080E7920:
	.4byte 0x00001172
_080E7924:
	.4byte 0x00000EA5
_080E7928:
	.4byte 0x00001132
_080E792C:
	.4byte 0x00001012
_080E7930:
	.4byte 0x00000F22
_080E7934:
	.4byte gUnknown_08177894
_080E7938:
	.4byte 0x00000F12
_080E793C:
	.4byte gUnknown_0817789C
_080E7940:
	.4byte gUnknown_030031C2
	THUMB_FUNC_END sub_080E77E4

