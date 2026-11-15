	THUMB_FUNC_START sub_080CE288
sub_080CE288: @ 0x080CE288
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r7, r0, #24
	add r0, r7, #0
	bl sub_080CD8BC
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r12, r0
	cmp r0, #0
	bne _080CE2F8
	ldr r5, _080CE304  @ =gRam
	ldr r1, _080CE308  @ =0x0000131C
	add r0, r5, r1
	add r0, r7, r0
	ldrb r6, [r0]
	ldr r0, _080CE30C  @ =gUnknown_03003E74
	ldrh r0, [r0]
	mov r2, #150
	lsl r2, r2, #4
	add r1, r5, r2
	ldrh r1, [r1]
	ldr r3, _080CE310  @ =0x00000964
	add r2, r5, r3
	ldrh r2, [r2]
	ldr r4, _080CE314  @ =gUnknown_08172E97
	mov r8, r4
	ldr r4, _080CE318  @ =0x000012FE
	add r3, r5, r4
	add r3, r7, r3
	ldrb r3, [r3]
	lsr r3, r3, #3
	add r3, r3, r8
	ldrb r3, [r3]
	ldr r7, _080CE31C  @ =0x00001122
	add r4, r5, r7
	add r4, r6, r4
	ldr r7, _080CE320  @ =0x00000D94
	add r5, r5, r7
	add r6, r6, r5
	ldrb r4, [r4]
	ldrb r5, [r6]
	orr r4, r4, r5
	mov r5, #240
	and r4, r4, r5
	mov r5, #14
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, r12
	str r4, [sp]
	bl sub_080C6368
_080CE2F8:
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080CE304:
	.4byte gRam
_080CE308:
	.4byte 0x0000131C
_080CE30C:
	.4byte gUnknown_03003E74
_080CE310:
	.4byte 0x00000964
_080CE314:
	.4byte gUnknown_08172E97
_080CE318:
	.4byte 0x000012FE
_080CE31C:
	.4byte 0x00001122
_080CE320:
	.4byte 0x00000D94
	THUMB_FUNC_END sub_080CE288

