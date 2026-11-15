	THUMB_FUNC_START sub_080CE6E4
sub_080CE6E4: @ 0x080CE6E4
	push {r4-r7,lr}
	sub sp, sp, #4
	lsl r0, r0, #24
	lsr r0, r0, #24
	lsl r7, r1, #24
	ldr r5, _080CE750  @ =gRam
	ldr r2, _080CE754  @ =0x0000131C
	add r1, r5, r2
	add r1, r0, r1
	ldrb r6, [r1]
	bl sub_080CD8BC
	lsl r0, r0, #24
	lsr r0, r0, #24
	mov r12, r0
	cmp r0, #0
	bne _080CE746
	ldr r0, _080CE758  @ =gUnknown_03003E74
	ldrh r0, [r0]
	mov r3, #150
	lsl r3, r3, #4
	add r1, r5, r3
	ldrh r1, [r1]
	ldr r4, _080CE75C  @ =0x00000964
	add r2, r5, r4
	ldrh r2, [r2]
	ldr r4, _080CE760  @ =gUnknown_08172DF5
	lsr r3, r7, #26
	add r3, r3, r4
	ldrb r3, [r3]
	ldr r7, _080CE764  @ =0x00001122
	add r4, r5, r7
	add r4, r6, r4
	ldr r7, _080CE768  @ =0x00000D94
	add r5, r5, r7
	add r5, r6, r5
	ldrb r4, [r4]
	ldrb r5, [r5]
	orr r4, r4, r5
	mov r5, #240
	and r4, r4, r5
	mov r5, #4
	orr r4, r4, r5
	lsl r4, r4, #8
	orr r3, r3, r4
	mov r4, r12
	str r4, [sp]
	bl sub_080C6004
_080CE746:
	add sp, sp, #4
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_080CE750:
	.4byte gRam
_080CE754:
	.4byte 0x0000131C
_080CE758:
	.4byte gUnknown_03003E74
_080CE75C:
	.4byte 0x00000964
_080CE760:
	.4byte gUnknown_08172DF5
_080CE764:
	.4byte 0x00001122
_080CE768:
	.4byte 0x00000D94
	THUMB_FUNC_END sub_080CE6E4

