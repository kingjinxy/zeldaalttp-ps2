	THUMB_FUNC_START sub_08126C48
sub_08126C48: @ 0x08126C48
	push {r4-r7,lr}
	ldr r3, _08126CC8  @ =gUnknown_03000050
	mov r2, #0
	mov r0, #5
	strb r0, [r3]
	mov r1, #1
	strb r1, [r3, #21]
	mov r0, #3
	strb r0, [r3, #29]
	strb r1, [r3, #1]
	ldr r0, _08126CCC  @ =gRam
	ldr r4, _08126CD0  @ =0x00001B0A
	add r1, r0, r4
	strh r2, [r1]
	add r4, r4, #4
	add r1, r0, r4
	strh r2, [r1]
	ldr r1, _08126CD4  @ =0x00001B10
	add r0, r0, r1
	strh r2, [r0]
	mov r2, #2
	ldr r7, _08126CD8  @ =gUnknown_081807C8
	ldr r6, _08126CDC  @ =gUnknown_081807CB
	mov r4, #0
	add r5, r3, #0
	add r5, r5, #96
_08126C7C:
	add r0, r3, #0
	add r0, r0, #16
	add r0, r2, r0
	mov r1, #2
	strb r1, [r0]
	add r1, r3, #0
	add r1, r1, #48
	add r1, r2, r1
	add r0, r2, r7
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r3, #0
	add r0, r0, #56
	add r0, r2, r0
	strb r4, [r0]
	add r1, r3, #0
	add r1, r1, #72
	add r1, r2, r1
	add r0, r2, r6
	ldrb r0, [r0]
	strb r0, [r1]
	add r0, r3, #0
	add r0, r0, #80
	add r0, r2, r0
	strb r4, [r0]
	add r0, r3, #0
	add r0, r0, #88
	add r0, r2, r0
	strb r4, [r0]
	add r0, r2, r5
	strb r4, [r0]
	sub r2, r2, #1
	cmp r2, #0
	bge _08126C7C
	pop {r4-r7}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08126CC8:
	.4byte gUnknown_03000050
_08126CCC:
	.4byte gRam
_08126CD0:
	.4byte 0x00001B0A
_08126CD4:
	.4byte 0x00001B10
_08126CD8:
	.4byte gUnknown_081807C8
_08126CDC:
	.4byte gUnknown_081807CB
	THUMB_FUNC_END sub_08126C48

