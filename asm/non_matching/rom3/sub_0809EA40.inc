	THUMB_FUNC_START sub_0809EA40
sub_0809EA40: @ 0x0809EA40
	push {r4-r6,lr}
	mov r6, r9
	mov r5, r8
	push {r5,r6}
	add r5, r0, #0
	lsl r5, r5, #24
	bl sub_0809E970
	ldr r4, _0809EB20  @ =gRam
	ldr r0, _0809EB24  @ =0x00001714
	add r1, r4, r0
	mov r0, #0
	strb r0, [r1]
	mov r1, #182
	lsl r1, r1, #5
	add r2, r4, r1
	ldr r0, _0809EB28  @ =gUnknown_0816812C
	lsr r5, r5, #25
	lsl r5, r5, #1
	add r0, r5, r0
	ldrh r1, [r0]
	ldrh r2, [r2]
	add r1, r1, r2
	ldr r2, _0809EB2C  @ =0x00001708
	add r0, r4, r2
	strh r1, [r0]
	ldr r6, _0809EB30  @ =0x00000A0E
	add r3, r4, r6
	ldrh r0, [r3]
	and r1, r1, r0
	mov r2, #150
	lsl r2, r2, #4
	add r0, r4, r2
	strh r1, [r0]
	ldr r6, _0809EB34  @ =0x000016C4
	add r2, r4, r6
	mov r0, #0
	ldrsh r1, [r2, r0]
	ldr r0, _0809EB38  @ =gUnknown_08168134
	add r0, r5, r0
	mov r6, #0
	ldrsh r0, [r0, r6]
	add r1, r1, r0
	ldrh r0, [r3]
	and r1, r1, r0
	asr r1, r1, #3
	ldr r0, _0809EB3C  @ =0x00000964
	add r0, r0, r4
	mov r8, r0
	strh r1, [r0]
	mov r6, #0
	ldrsh r1, [r2, r6]
	ldr r0, _0809EB40  @ =gUnknown_0816813C
	add r0, r5, r0
	mov r6, #0
	ldrsh r0, [r0, r6]
	add r1, r1, r0
	ldrh r0, [r3]
	and r1, r1, r0
	asr r1, r1, #3
	ldr r0, _0809EB44  @ =0x00000968
	add r0, r0, r4
	mov r9, r0
	strh r1, [r0]
	mov r1, #0
	ldrsh r0, [r2, r1]
	ldr r1, _0809EB48  @ =gUnknown_08168144
	add r5, r5, r1
	mov r2, #0
	ldrsh r1, [r5, r2]
	add r0, r0, r1
	ldrh r1, [r3]
	and r0, r0, r1
	lsr r0, r0, #3
	ldr r1, _0809EB4C  @ =0x00001734
	add r6, r4, r1
	strb r0, [r6]
	ldr r2, _0809EB50  @ =0x00001735
	add r5, r4, r2
	lsr r0, r0, #8
	strb r0, [r5]
	ldr r0, _0809EB54  @ =0x00000974
	add r4, r4, r0
	mov r0, #1
	strh r0, [r4]
	bl sub_080A0454
	mov r1, r9
	ldrh r0, [r1]
	mov r2, r8
	strh r0, [r2]
	mov r0, #2
	strh r0, [r4]
	bl sub_080A0454
	ldrb r1, [r6]
	ldrb r0, [r5]
	lsl r0, r0, #8
	add r1, r1, r0
	mov r6, r8
	strh r1, [r6]
	mov r0, #4
	strh r0, [r4]
	bl sub_080A0454
	pop {r3,r4}
	mov r8, r3
	mov r9, r4
	pop {r4-r6}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_0809EB20:
	.4byte gRam
_0809EB24:
	.4byte 0x00001714
_0809EB28:
	.4byte gUnknown_0816812C
_0809EB2C:
	.4byte 0x00001708
_0809EB30:
	.4byte 0x00000A0E
_0809EB34:
	.4byte 0x000016C4
_0809EB38:
	.4byte gUnknown_08168134
_0809EB3C:
	.4byte 0x00000964
_0809EB40:
	.4byte gUnknown_0816813C
_0809EB44:
	.4byte 0x00000968
_0809EB48:
	.4byte gUnknown_08168144
_0809EB4C:
	.4byte 0x00001734
_0809EB50:
	.4byte 0x00001735
_0809EB54:
	.4byte 0x00000974
	THUMB_FUNC_END sub_0809EA40

