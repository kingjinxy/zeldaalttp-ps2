	THUMB_FUNC_START sub_08133774
sub_08133774: @ 0x08133774
	ldr r0, _081337B4  @ =gUnknown_02000C20
	mov r1, #0
	strh r1, [r0]
	add r0, r0, #2
	strh r1, [r0]
	add r0, r0, #2
	strh r1, [r0]
	add r0, r0, #2
	strh r1, [r0]
	add r0, r0, #2
	strh r1, [r0]
	add r0, r0, #2
	strh r1, [r0]
	add r0, r0, #2
	strh r1, [r0]
	add r0, r0, #2
	strh r1, [r0]
	ldr r1, _081337B8  @ =gRam
	ldr r0, _081337BC  @ =0x00000CF8
	add r2, r1, r0
	mov r0, #0
	strh r0, [r2]
	ldr r0, _081337C0  @ =0x00000CFA
	add r2, r1, r0
	mov r0, #2
	strh r0, [r2]
	ldr r0, _081337C4  @ =0x0000099B
	add r1, r1, r0
	mov r0, #1
	strb r0, [r1]
	bx lr
	.byte 0x00
	.byte 0x00
_081337B4:
	.4byte gUnknown_02000C20
_081337B8:
	.4byte gRam
_081337BC:
	.4byte 0x00000CF8
_081337C0:
	.4byte 0x00000CFA
_081337C4:
	.4byte 0x0000099B
	THUMB_FUNC_END sub_08133774

