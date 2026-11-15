	THUMB_FUNC_START sub_080C626C
sub_080C626C: @ 0x080C626C
	push {r4-r7,lr}
	mov r7, r8
	push {r7}
	sub sp, sp, #4
	add r4, r1, #0
	lsl r0, r0, #24
	lsr r7, r0, #24
	lsl r4, r4, #16
	ldr r5, _080C62FC  @ =gRam
	mov r1, #150
	lsl r1, r1, #4
	add r0, r5, r1
	ldrh r1, [r0]
	ldr r2, _080C6300  @ =0x00000964
	add r0, r5, r2
	ldrh r2, [r0]
	ldr r0, _080C6304  @ =gUnknown_03003E74
	lsr r4, r4, #16
	ldrh r0, [r0]
	add r4, r4, r0
	lsl r4, r4, #16
	lsr r4, r4, #16
	ldr r3, _080C6308  @ =gUnknown_082272A8
	mov r8, r3
	ldr r6, _080C630C  @ =0x00000F92
	add r0, r5, r6
	add r0, r7, r0
	ldrb r3, [r0]
	ldr r0, _080C6310  @ =gUnknown_082273B8
	mov r12, r0
	add r6, r6, #96
	add r0, r5, r6
	add r0, r7, r0
	ldrb r0, [r0]
	lsl r0, r0, #1
	add r0, r0, r12
	ldrh r0, [r0]
	add r3, r3, r0
	add r3, r3, r8
	ldrb r3, [r3]
	ldr r6, _080C6314  @ =0x00000969
	add r0, r5, r6
	ldrb r0, [r0]
	lsl r0, r0, #24
	asr r0, r0, #24
	lsl r0, r0, #8
	orr r3, r3, r0
	lsl r3, r3, #16
	lsr r3, r3, #16
	mov r0, #2
	str r0, [sp]
	add r0, r4, #0
	bl sub_080C6368
	ldr r0, _080C6318  @ =0x00001032
	add r5, r5, r0
	add r5, r7, r5
	ldrb r1, [r5]
	mov r0, #16
	and r0, r0, r1
	cmp r0, #0
	beq _080C62F0
	add r0, r7, #0
	mov r1, #10
	bl sub_080C57F8
_080C62F0:
	add sp, sp, #4
	pop {r3}
	mov r8, r3
	pop {r4-r7}
	pop {r0}
	bx r0
_080C62FC:
	.4byte gRam
_080C6300:
	.4byte 0x00000964
_080C6304:
	.4byte gUnknown_03003E74
_080C6308:
	.4byte gUnknown_082272A8
_080C630C:
	.4byte 0x00000F92
_080C6310:
	.4byte gUnknown_082273B8
_080C6314:
	.4byte 0x00000969
_080C6318:
	.4byte 0x00001032
	THUMB_FUNC_END sub_080C626C

