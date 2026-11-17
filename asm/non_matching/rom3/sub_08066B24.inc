	THUMB_FUNC_START sub_08066B24
sub_08066B24: @ 0x08066B24
	push {lr}
	bl sub_0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08066B4C
	ldr r0, _08066B40  @ =gUnknown_084302F4
	ldr r1, _08066B44  @ =0x00000447
	ldr r2, _08066B48  @ =0x0000043E
	bl sub_08066AF8
	b _08066B56
	.byte 0x00
	.byte 0x00
_08066B40:
	.4byte gUnknown_084302F4
_08066B44:
	.4byte 0x00000447
_08066B48:
	.4byte 0x0000043E
_08066B4C:
	ldr r0, _08066B70  @ =gUnknown_084302F8
	ldr r1, _08066B74  @ =0x00000447
	ldr r2, _08066B78  @ =0x0000043E
	bl sub_08066AF8
_08066B56:
	bl sub_0800099C
	mov r1, #3
	bl __umodsi3
	cmp r0, #1
	beq _08066B84
	cmp r0, #1
	bcc _08066B7C
	cmp r0, #2
	beq _08066B9C
	b _08066BA6
	.byte 0x00
	.byte 0x00
_08066B70:
	.4byte gUnknown_084302F8
_08066B74:
	.4byte 0x00000447
_08066B78:
	.4byte 0x0000043E
_08066B7C:
	ldr r0, _08066B80  @ =gUnknown_084302FC
	b _08066B86
_08066B80:
	.4byte gUnknown_084302FC
_08066B84:
	ldr r0, _08066B90  @ =gUnknown_08430300
_08066B86:
	ldr r1, _08066B94  @ =0x00000447
	ldr r2, _08066B98  @ =0x0000043E
	bl sub_08066AF8
	b _08066BA6
_08066B90:
	.4byte gUnknown_08430300
_08066B94:
	.4byte 0x00000447
_08066B98:
	.4byte 0x0000043E
_08066B9C:
	ldr r0, _08066BC0  @ =gUnknown_08430304
	ldr r1, _08066BC4  @ =0x00000447
	ldr r2, _08066BC8  @ =0x0000043E
	bl sub_08066AF8
_08066BA6:
	bl sub_0800099C
	mov r1, #1
	and r1, r1, r0
	cmp r1, #0
	beq _08066BD4
	ldr r0, _08066BCC  @ =gUnknown_08430308
	mov r1, #140
	lsl r1, r1, #3
	ldr r2, _08066BD0  @ =0x00000455
	bl sub_08066AF8
	b _08066BDE
_08066BC0:
	.4byte gUnknown_08430304
_08066BC4:
	.4byte 0x00000447
_08066BC8:
	.4byte 0x0000043E
_08066BCC:
	.4byte gUnknown_08430308
_08066BD0:
	.4byte 0x00000455
_08066BD4:
	ldr r0, _08066BE4  @ =gUnknown_0843030C
	ldr r1, _08066BE8  @ =0x00000447
	ldr r2, _08066BEC  @ =0x0000043E
	bl sub_08066AF8
_08066BDE:
	pop {r0}
	bx r0
	.byte 0x00
	.byte 0x00
_08066BE4:
	.4byte gUnknown_0843030C
_08066BE8:
	.4byte 0x00000447
_08066BEC:
	.4byte 0x0000043E
	THUMB_FUNC_END sub_08066B24

