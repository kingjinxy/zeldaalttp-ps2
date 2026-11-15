	THUMB_FUNC_START sub_08114B34
sub_08114B34: @ 0x08114B34
	push {r4,lr}
	ldr r3, _08114B9C  @ =gRam
	ldr r0, _08114BA0  @ =0x0000166A
	add r1, r3, r0
	mov r0, #128
	strb r0, [r1]
	ldr r2, _08114BA4  @ =0x00001757
	add r1, r3, r2
	mov r0, #64
	strb r0, [r1]
	ldr r4, _08114BA8  @ =0x00001754
	add r0, r3, r4
	ldrb r2, [r0]
	ldr r1, _08114BAC  @ =gUnknown_0200EBA0
	add r0, r2, r1
	ldrb r1, [r0]
	ldr r4, _08114BB0  @ =gUnknown_0200EBB4
	add r0, r2, r4
	ldrb r0, [r0]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldr r4, _08114BB4  @ =0x00001664
	add r0, r3, r4
	strh r1, [r0]
	ldr r1, _08114BB8  @ =gUnknown_0200EBC8
	add r0, r2, r1
	ldrb r1, [r0]
	ldr r4, _08114BBC  @ =gUnknown_0200EBDC
	add r2, r2, r4
	ldrb r0, [r2]
	lsl r0, r0, #8
	orr r1, r1, r0
	ldr r2, _08114BC0  @ =0x00001666
	add r0, r3, r2
	strh r1, [r0]
	mov r4, #161
	lsl r4, r4, #4
	add r0, r3, r4
	ldrb r1, [r0]
	add r2, r2, #3
	add r0, r3, r2
	strb r1, [r0]
	sub r4, r4, #94
	add r0, r3, r4
	ldrb r0, [r0]
	ldr r1, _08114BC4  @ =0x00001668
	add r3, r3, r1
	strb r0, [r3]
	pop {r4}
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08114B9C:
	.4byte gRam
_08114BA0:
	.4byte 0x0000166A
_08114BA4:
	.4byte 0x00001757
_08114BA8:
	.4byte 0x00001754
_08114BAC:
	.4byte gUnknown_0200EBA0
_08114BB0:
	.4byte gUnknown_0200EBB4
_08114BB4:
	.4byte 0x00001664
_08114BB8:
	.4byte gUnknown_0200EBC8
_08114BBC:
	.4byte gUnknown_0200EBDC
_08114BC0:
	.4byte 0x00001666
_08114BC4:
	.4byte 0x00001668
	THUMB_FUNC_END sub_08114B34

