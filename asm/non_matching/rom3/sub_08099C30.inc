	THUMB_FUNC_START sub_08099C30
sub_08099C30: @ 0x08099C30
	push {r4,lr}
	ldr r2, _08099C7C  @ =gRam
	ldr r0, _08099C80  @ =0x00001727
	add r3, r2, r0
	mov r0, #0
	strb r0, [r3]
	ldr r1, _08099C84  @ =0x000016CD
	add r0, r2, r1
	ldrb r0, [r0]
	lsl r0, r0, #24
	cmp r0, #0
	beq _08099C56
	asr r0, r0, #24
	mvn r0, r0
	lsr r1, r0, #31
	ldr r0, _08099C88  @ =gUnknown_08167EA0
	add r0, r1, r0
	ldrb r0, [r0]
	strb r0, [r3]
_08099C56:
	mov r1, #2
	ldr r4, _08099C8C  @ =0x000016CE
	add r0, r2, r4
	ldrb r0, [r0]
	lsl r0, r0, #24
	cmp r0, #0
	beq _08099C76
	cmp r0, #0
	blt _08099C6A
	mov r1, #3
_08099C6A:
	ldr r0, _08099C88  @ =gUnknown_08167EA0
	add r0, r1, r0
	ldrb r1, [r3]
	ldrb r0, [r0]
	orr r1, r1, r0
	strb r1, [r3]
_08099C76:
	pop {r4}
	pop {r0}
	bx r0
_08099C7C:
	.4byte gRam
_08099C80:
	.4byte 0x00001727
_08099C84:
	.4byte 0x000016CD
_08099C88:
	.4byte gUnknown_08167EA0
_08099C8C:
	.4byte 0x000016CE
	THUMB_FUNC_END sub_08099C30

